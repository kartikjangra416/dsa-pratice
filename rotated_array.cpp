#include<iostream>
using namespace std;
void rotate(int arr[],int size,int value){
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        // array ka index + kitne se sift karna hai iska mode with array k size me array of i ki value dall do 
        temp[(i+value)%size]=arr[i];
    }
    // Copy the rotated values back to the original array 
    for (int i = 0; i < size; i++) 
    {
         arr[i] = temp[i]; 
    }
    
}
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[5]={1,2,3,4,5};

    rotate(arr,5,2);

  print(arr,5);

}