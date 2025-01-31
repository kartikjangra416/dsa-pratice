// program to make decimal to binary using bitwise operator made by me

// #include<iostream>
// using namespace std;
// int main (){
//     int n =500000000;
//     int a[32];
//     int i =0;
//     while(n!=0){
//         a[i]= {n&1};
//         i++;
//         n=n>>1;
//     }
//     for (int t =i-1 ; t>=0 ; t--)
//     {
//        cout<<a[t];
//     }

// }

// program to reverse the program
// #include <iostream>
// using namespace std;
// int main(){

// int n = -123 ;
// int ans=0;
// while (n!=0)
// {
//     int lsd=n%10;
//     ans=ans*10+lsd;

//     n=n/10;
// }
// cout <<ans;

// }

// program to take the input and the do 1st compliment of this

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int temp = n;
    int mask = 0;

    // Handle the edge case for n = 0
    if (n == 0) {
        cout << "One's complement (base 10): " << 1 << endl;
        return 0;
    }

    // Count the number of bits and generate the mask simultaneously
    while (temp != 0) {
        mask = (mask << 1) | 1; // Left shift mask and add 1
        temp = temp >> 1; // Right shift temp
    }

    // Calculate and print the one's complement
    int onesComplement = (~n) & mask;

    cout << "Original number (base 10): " << n << endl;
    cout << "One's complement (base 10): " << onesComplement << endl;

    return 0;
}
