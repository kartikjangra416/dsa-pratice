// #include <iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>> arr[i][j];

//         }

//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<< arr[i][j]<<" ";

//         }
//         cout<<endl;
//     }

// }

// wavy form

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for (int j = 0; j < 3; j++)
//     {

//         if ( j%2 == 0 )
//         {
//             for (int i = 0; i < 3; i++)
//         {
//             cout<<arr[i][j];
//         }
//         }else{

//         for (int i = 2; i >=0 ; i--)
//         {
//             cout<<arr[i][j];
//         }
//         }
//     }

// }

// spiral form

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[3][3] = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};

//     int top = 0, bottom = 3 - 1, left = 0, right = 3 - 1; // (row -1)   (column -1)

//     while (top <= bottom && left <= right)
//     {

//         for (int i = left; i <= right; i++)
//             cout << arr[top][i] << " ";
//         top++;
//         for (int i = top; i <= bottom; i++)
//             cout << arr[i][right] << " ";
//         right--;
//         if (top <= bottom)
//         {
//             for (int i = right; i >= left; i--)
//                 cout << arr[bottom][i] << " ";
//             bottom--;
//         }
//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//                 cout << arr[i][left] << " ";
//             left++;
//         }
//     }
// }


// binary search 2d

// #include<iostream>
// using namespace std;

// bool searchIn2DArray(int arr[3][3], int rows, int cols, int key) {
//     int i = 0;
//     int j = cols - 1;

//     while (i < rows && j >= 0) {
//         if (arr[i][j] == key) {
//             cout << "Match found at index (" << i << ", " << j << ")\n";
//             return true;
//         } else if (arr[i][j] < key) {
//             i++;
//         } else {
//             j--;
//         }
//     }

//     cout << "Key not found.\n";
//     return false;
// }

// int main() {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int key = 7;

//     searchIn2DArray(arr, 3, 3, key);
//     return 0;
// }



// second method binary search by finding the mid 
// #include<iostream>
// using namespace std;

// bool binarySearch2D(int arr[3][3], int rows, int cols, int key) {
//     int left = 0;
//     int right = rows * cols - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         int midElement = arr[mid / cols][mid % cols];

//         if (midElement == key) {
//             cout << "Match found at index (" << mid / cols << ", " << mid % cols << ")\n";
//             return true;
//         } else if (midElement < key) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     cout << "Key not found.\n";
//     return false;
// }

// int main() {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int key = 7;

//     binarySearch2D(arr, 3, 3, key);
//     return 0;
// }



