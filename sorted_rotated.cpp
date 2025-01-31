#include<iostream>
using namespace std;

void sortrot(int arr[], int size) {
    
    int count=0;
    for (int i = 1; i < size; i++) {
        if (arr[i-1]>arr[i] )
        {
            count++;
            if (count > 1) 
            { 
                break;
            }
        }
        
    }

   // Additional check to handle the rotation case 
   if (arr[size - 1] > arr[0]) {
     count++; 
     }

    if (count <= 1) { 
        cout << "The array is rotated and sorted" << endl; 
    } else {
         cout << "The array is not rotated and sorted" << endl; 
    }
    
    cout << endl;
}
int main(){
    int arr1[5]={3,4,5,1,2};
    int arr2[5]={3,5,7,1,6};

    sortrot(arr1,5);
    sortrot(arr2,5);
}