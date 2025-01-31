// #include<iostream>
// using namespace std;
// int main()
// {
//     int num=5;
//     cout <<&num<<endl;
//     int *ptr = &num;

//     cout<<*ptr<<endl;
    

//     int arr[5]={0};
//     cout << &arr[0]<<"  ";
//     cout<<1[arr]<<"  "<<*(arr+1);
// } 



// bad practice;

// #include<iostream>
// using namespace std;
// int main()
// {
//     char a='a';
//     char *p=&a;
//     cout<<*p<<endl;
//     cout<<p;
// }


// double pointer 
#include<iostream>
using namespace std;
int main(){
    int a=2;
    int *p=&a;
    int **p1=&p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<**p1<<endl;
}
