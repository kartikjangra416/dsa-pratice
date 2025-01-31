// #include<iostream>
// using namespace std;
// int power(int n,int m){

//     if (m==0)
//     {
//         return 1;
//     }else
//     {
//         return n*power(n,m-1);
//     }

// }
// int main(){
//     int n=2;
//     int m=3;

//    int  ans=power(n,m);
//    cout <<ans;
// }

// // fibonaci series using recurssion
// #include<iostream>
// using namespace std;
// int fibonacci(int n){

//     if (n==0)
//     {
//         return 0;
//     }

//     if (n==1)
//     {
//         return 1;
//     }

//     int ans=fibonacci(n-1)+fibonacci(n-2);
//     return ans;

// }
// int main(){

//         int n=3;

//         cout<<fibonacci(n);

// }

// count the ways to reach the nth stair
// #include<iostream>
// using namespace std;
// int ways(int n){

// // base case

// if (n<0)
// {
//     return 0;
// }
// if (n == 0)
// {
//      return 1;
// }

// // recurssive case
//     int ans=ways(n-1)+ways(n-2);
//     return ans;

// }
// int main(){

//     int n=4;
//     cout <<ways(n);

// }

// // say digits
// #include <iostream>
// using namespace std;
// void speak(int n)
// {

//     if (n == 0)
//     {

//         return;
//     }
//     int p = n % 10;
//     speak(n / 10);

//     if (p == 0)
//     {
//         cout << "zero" << endl;
//     }
//     else if (p == 1)
//     {
//         cout << "one" << endl;
//     }
//     else if (p == 2)
//     {
//         cout << "two" << endl;
//     }
//     else if (p == 3)
//     {
//         cout << "three" << endl;
//     }
//     else if (p == 4)
//     {
//         cout << "four" << endl;
//     }
//     else if (p == 5)
//     {
//         cout << "five" << endl;
//     }
//     else if (p == 6)
//     {
//         cout << "six" << endl;
//     }
//     else if (p == 7)
//     {
//         cout << "seven" << endl;
//     }
//     else if (p == 8)
//     {
//         cout << "eight" << endl;
//     }
//     else if (p == 9)
//     {
//         cout << "nine" << endl;
//     }
// }
// int main()
// {

//     int n = 213454;
//     speak(n);
// }

// sorted array using recurssion

// #include<iostream>
// using namespace std;
// bool issorted(int *arr, int size){
//     if (size==0 || size==1)
//     {
//         return true;
//     }
//     if (arr[0]>arr[1])
//     {
//         return false;
//     }else{
//         bool ans= issorted( arr+1,--size);
//         return ans;
// }

// }
// int main(){

// int arr[5]={1,2,3,4,5};
// int size=5;
// cout<<issorted(arr,5);

// }

// // summ of array using recurssion
// #include <iostream>
// using namespace std;
// int sumarr(int *arr, int size)
// {
//     if (size == 0)
//     {
//         return 0;
//     }

//     int ans = arr[0] + sumarr(arr + 1, size - 1);
//     return ans;
// }
// int main()
// {
//     int arr[5] = {3};
//     int size = 1;
//     cout << sumarr(arr, size) << endl;
// }

// // linear search using recurssion
// #include <iostream>
// using namespace std;
// bool linserch(int *arr, int &key, int size)
// {
//     if (size == 0)
//     {
//         return false;
//     }

//     if (arr[0] == key)
//     {
//         return true;
//     }
//     bool ans = linserch(arr + 1, key, size - 1);
//     return ans;
// }
// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int key = 12;
//     cout << linserch(arr, key, size);
// }

// // binary search using recurssion

// #include <iostream>
// using namespace std;
// bool binserch(int *arr, int start, int end, int &key)
// {

//     if (start > end)
//     {
//         return false;
//     }
//     int mid = start + (end - start) / 2;

//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     if (arr[mid] < key)
//     {
//         return binserch(arr, mid + 1, end, key);
//     }
//     else
//     {
//         return binserch(arr, start, mid - 1, key);
//     }
// }
// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int key = 1;
//     cout << binserch(arr, 0, size - 1, key);
// }

// // recurssion of strings reverese
// #include<iostream>
// using namespace std;
// void reverse(string& s , int i  , int j){
//     if (i>j)
//     {
//         return;
//     }

//     swap(s[i],s[j]);
//     reverse(s,++i,--j);

// }
// int main(){
//     string s ="kartik";
//     reverse(s,0,s.length()-1);
//     cout <<s;
// }

// // check pallindrome

// #include <iostream>
// using namespace std;
// bool checkpallin(string &s, int i, int j)
// {
//     if (i > j)
//     {
//         return true;
//     }

//     if (s[i] != s[j])
//     {
//         return false;
//     };
//     bool ans = checkpallin(s, ++i, --j);
//     return ans;
// }
// int main()
// {
//     string s = "kaak";
//     cout << checkpallin(s, 0, s.length() - 1);
// }

// bubble sort using recurssion
#include <iostream>
using namespace std;
void bubsort(int arr[],int size){
    if (size<=1)
    {
        return;
    }
    
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i+1]<arr[i])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    bubsort(arr,--size);
    
}
int main()
{
    int arr[5] = {5,4,3,2,1};
    bubsort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
}