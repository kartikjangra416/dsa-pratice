
// selection sort    1+2+3+......n-2 + n-1=n(n-1)/2 for when size of array is small 

// #include<iostream>
// using namespace std;

// // function to print array

// void print (int a[],int size){
// for (int i = 0; i < size; i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// }

    
// int main(){
//     int arr[5]={2,4,3,5,22};
//     int temp;
    
    
//     for (int i = 0; i < 4; i++)
//     {
//         int minIndex=i;
//         for (int j = i+1; j < 5; j++)
//         {
//         if (arr[j]<arr[minIndex])
//         {
//             minIndex=j;
            
//         }
        
//         }
//         temp=arr[i];
//         arr[i]=arr[minIndex];
//         arr[minIndex]=temp;
        
        
//     }
    
//     print(arr,5);
// }