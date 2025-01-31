// #include<iostream>
// using namespace std;
// int main(){
//      int dost[10]={2,3};
     
//     //indexing of array starts always from 0 


//     int n = 10;
//     for (int  i = 0; i < n; i++)
//     {
//         cout<<dost[i]<<" ";
//     }
      
// }

// linear search by a[i]==key 


// reverse an array 

// #include<iostream>
// using namespace std;
// int main (){
//     int arr [5]={1,2,3,4,5};

//     // reverse
//     for (int i = 0; i < 5/2; i++)
//     {
//         int a =arr[i];
//         arr[i]=arr[5-i-1];
//         arr[5-i-1]=a;
//     }


//     // swaping without using the third variable 
//     // a[i]=a[i]+a[n-i-1]
//     // a[n-i-1]=a[i]-a[n-i-1]
//     // a[i]=a[i]-a[n-i-1]
//     // swap using swap fucntion 
//     for (int  i = 0; i < 5; i++)
//     {
//     cout<< arr[i];
        
//     }
    

// }


// // array problems
// // reverse alternate no. pairs of two 
// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5]={1,2,3,4,5};
//     for (int i = 0; i < 5-1; i=i+2)
//     {
//         swap(arr[i],arr[i+1]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }


// no xored with itself gives zero and a no zored with zero gives the no. itself 

// problem of finding unique no. 
// #include<iostream>
// using namespace std;
// int main(){
//     int  arr[5]={1,1,2,3,2};
//     int value=0;
//     for (int  i = 0; i < 5; i++)
//     {
//         value=value^arr[i];
//     }
//     cout<<value;
// }




// problem finding unique no. so that i like which occurs twice 

// #include<iostream>
// using namespace std;
// int main(){
//     int  arr[4]={1,2,3,2};
//     int value=0;
//     for (int  i = 0; i < 4; i++)
//     {
//         value=value^arr[i];
//     }
//     for (int i = 1; i < 4; i++)
//     {
//         value=value^i;
//     }
//     cout<<value;
// }


// findng the no. which are occuring twice by traverse array and adding athe index by finding a[i]%arrsize and then at that index adding the arr size then one more for loop and divde the a[i]/size >1
// #include <iostream>
// using namespace std;

// void findDuplicates(int arr[], int size) {
//     // Step 1: Traverse the array and add the size to indexed positions
//     for (int i = 0; i < size; i++) {
//         int index = arr[i] % size;
//         arr[index] += size;
//     }

//     // Step 2: Traverse the array again to find duplicates
//     cout << "Duplicate numbers are: ";
//     for (int i = 0; i < size; i++) {
//         if (arr[i] / size > 1) {
//             cout << i << " ";
//         }
//     }
// }

// int main() {
//     int arr[] = {4, 3, 2, 7, 8, 3, 2, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     findDuplicates(arr, size);
//     return 0;
// }


// for intersection of two element do brute force aproach check match update so it do not match again 
// optimization 1 is that if arrays are sorted then break out of the loop if element of array 1 is smaller then upcomming elements of second arra y
// optimization 2 is that if arrays are sorted then after break also upgrade the j++


// sorting an arr with three digits in it like 1/2/0/2/1 etc using three pointer method
// #include <iostream>
// using namespace std;

// void sortArray(int arr[], int size) {
//     int low = 0, mid = 0, high = size - 1;

//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         } else if (arr[mid] == 1) {
//             mid++;
//         } else if (arr[mid] == 2) {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 0, 0, 2, 1, 0, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     sortArray(arr, size);

//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
