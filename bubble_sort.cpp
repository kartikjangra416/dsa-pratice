// #include<iostream>
// using namespace std;

// void print(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[5] = {5, 3, 4, 1, 2};
//     // int arr[5] = {1, 2, 3, 5, 4};

//     for (int i = 0; i < 4; i++) {
//         bool swapped = false;    // for more optimization like in best case if the array is already sorted
//         for (int j = 0; j < 5 - 1 - i; j++) {  // only run till (n-i-1) because the last element is already in its largest position, no need to check it again
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = true; // correct spelling and placement
//             }
//         }
//         print(arr, 5);

//         if (swapped == false) { // Check after the inner loop
//             break;
//         }
//     }

//     return 0;
// }
