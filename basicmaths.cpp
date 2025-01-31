// //  sieve of erathosthenes


// #include<iostream>
// #include<vector>
// using namespace std;

// void sieveOfEratosthenes(int n) {
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
//     int count=0;
//     for (int i = 2; i < n; i++) {
//         if (isPrime[i]) {
//             count++;
//             for (int j = 2*i; j < n; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }

    
//     cout << count<<endl;
// }

// int main() {
//     int n = 5000000;
//     sieveOfEratosthenes(n);
//     return 0;
// }


// gcd

// lcm *gcd = a*b

#include<iostream>
using namespace std;

int gcdIterative(int a, int b) {
    
    
    while (b != 0) {       //we can also find it by gcd 1-b,b
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56, b = 98;
    cout << "GCD of " << a << " and " << b << " is: " << gcdIterative(a, b) << endl;
    return 0;
}
