// binary search karne k liye find mid by start +end divide by 2 and then if key == mid then return mid other wise 
// left wale part k liye end = mid-1 and if right wala part then start = mid + 1 


// #include<iostream>
// using namespace std;
// int main(){

//  int arr[5]={1,2,3,4,5};
//  int key = 5;
// int start =0;
// int end=5-1;
//  int mid;


//  while (start<=end)
//  {
//     mid=(start+end)/2; // to stay safe from overflow we use s+ (e-s)/2
//     if (key== arr[mid])
//     {
//         cout<<mid;
//         break;
//     }
//     if (key>arr[mid])
//     {
//        start=mid+1;
//     }
    
//     else if (key<arr[mid])
//     {
//         end=mid-1;
//     }
    
//  }
// }


// first and last occurance 
// #include<vector>
// using namespace std;
// int firstOcc(vector<int>& arr, int n, int key) {

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(vector<int>& arr, int n, int key) {

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e) {

//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {//Right me jao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {//left me jao
//             e = mid - 1;
//         }

//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first = firstOcc(arr, n, k);
//     p.second = lastOcc(arr, n, k);
    
//     return p;
// }


// peak in mountain array 

// #include<vector>
// using namespace std;

// class Solution {
// public:
  
//     int find_pivot(vector<int> v) {
// 	int s = 0, e = v.size() - 1;
// 	int mid=(s + e) / 2;
// 	while (s < e)
// 	{
// 		if(v[mid] < v[mid+1])
//      			s=mid+1;
//     		else
//       			e = mid;
    
// 		mid = (s + e) / 2;
// 	}
// 	return s;
//     }
//     int peakIndexInMountainArray(vector<int>& arr) {
//         return find_pivot(arr);
//     }
// };



// pivot quest 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,4,5,1};
//     int start=0 , end = 4, mid;
//      mid=start+(end-start)/2;
//     while (start<end)
//     {
//         if (arr[mid]>=arr[0])
//         {
//             start= mid+1;
//         }
//         else
//         {
//             end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
    
// cout<<"at index:"<<mid<<"the pivot is: "<<arr[mid];
// }

// search key in rotated sorted array  

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {4, 5, 1, 2, 3};
//     int key = 2;
//     int start = 0, end = 4;
//     int mid;

//     // Step 1: Find the pivot
//     while (start < end) {
//         mid = start + (end - start) / 2;
//         if (arr[mid] >= arr[0]) {
//             start = mid + 1;
//         } else {
//             end = mid;
//         }
//     }
    
//     // At this point, 'start' is the pivot
//     int pivot = start;
    
//     // Step 2: Decide which part to search
//     start = 0;
//     end = 4;
//     if (key >= arr[pivot] && key <= arr[end]) {
//         start = pivot;
//     } else {
//         end = pivot - 1;
//     }
    
//     // Step 3: Perform binary search in the selected part
//     while (start <= end) {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == key) {
//             cout << "Key found at index: " << mid << endl;
//             return 0; // Key found, exit
//         }
//         if (arr[mid] < key) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }
    
//     cout << "Key not found" << endl;
//     return 0;
// }



// finding square root using binary search by finding the mid between 0 and number and doing it square and if greater than number then end =mid-1 and if smaller then start=mid+1

// #include<iostream>
// using namespace std;
// int main (){
//     int value= 10;
//     int start=0, end=value, mid,result=-1;
//     while (start<=end)
//     {
//          mid= start+(end-start)/2;
//          if (mid * mid == value) { 
//             result=mid;
//             break;
//          }
//          if (mid*mid<value)
//          {
//             result=mid;
//             start=mid+1;
//          }
//          else
//          {
//             end=mid-1;
//          }
         
         
        
//     }
    
    
//     // Refine the result using 0.1 increments 
//     double preciseResult = result; 
//     while ((preciseResult + 0.1) * (preciseResult + 0.1) <= value) {
//          preciseResult += 0.1;
//           } 
//     cout << "The approximate square root of " << value << " is: " << preciseResult << endl;

// }


// book allocation pro blem 
// #include<vector>
// using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

