// #include<iostream>
// using namespace std;
// int main(){
//     int i =5;
//     int &j=i;
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     j++;
//     cout<<j<<endl;

// }


// 2d array using dynamic memory heap 
#include<iostream>
using namespace std;
int main(){


    int n;
    cin>>n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int [n];
    }
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            
            cin>>arr[i][j];
            
        }
        
    }

     for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}


// jaggered array 
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Create an array of integer pointers
    int **jaggedArray = new int*[rows];

    // Allocate different sized arrays for each row
    for (int i = 0; i < rows; ++i) {
        int cols;
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> cols;
        jaggedArray[i] = new int[cols];
        
        // Initialize elements
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> jaggedArray[i][j];
        }
    }

    // Print the jagged array
    cout << "The jagged array is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < sizeof(jaggedArray[i])/sizeof(jaggedArray[i][0]); ++j) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;

    return 0;
}
