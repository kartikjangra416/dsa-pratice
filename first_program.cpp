#include<iostream>
using namespace std;
int main()
{
    cout<<"hello world\n";
    int a = 2 ;
    int b = 3;
     

    int one = (a==b);
    cout<< one<<"\n";
    int  two= (a<b);
    cout<<two<<"\n" ;
    int three = (a>b);
    cout<<three <<"\n";
    int  four= (a!=b);
    cout<<four <<"\n";
    int five = !(a=b);
    cout<< five<<"\n";
    
    return 0;
}

