// main thing is not to swap just shift the element to j+1 and then insert the temp to j+1 because the j shift back by one more 

#include<iostream>
using namespace std;
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[5]={4, 3, 5, 6, 1};
   for (int i = 1; i < 5; i++)
   {
    int temp=arr[i];
    int j = i-1;
    for (; j >= 0; j--)
    {
     if (temp<arr[j])
     {
        //shift  jo aage ki vlaue hai uski jagha jo badi value ha use dal do 
        arr[j+1] = arr[j];
    }
    else
    {
        break;
    }
        
    }
    arr[j+1]=temp;
    
     
   }
   

         print(arr,5);

}