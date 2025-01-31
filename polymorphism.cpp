// existing in many forms compile time(function overloading , operator overloading) and run time
// #include<iostream>
// using namespace std;
// class a{
//     public:
//     void speak(){
//             cout<<"hello"<<endl;
//     }
//     // still overloading is not possible
//     // int speak(){
//     //         cout<<"hello"<<endl;
//     // }
//     void speak(string name){
//             cout<<"hello "<<name<<endl;
//     }
    
// };
// int main(){
//     a man;
//     man.speak();
// }

// operator oveloading
#include <iostream>
using namespace std;

class Number {
    int value;
    
public:
    Number(int v = 0) : value(v) {} //constructor to input v to value 

    // Overload the + operator to perform subtraction
    int operator+(const Number& other) {
        return (this->value - other.value);
    }

    int getValue() const {
        return value;
    }

    void setValue(int v) {
        value = v;
    }
};

int main() {
    Number num1(10);
    Number num2(3);

    // Using the overloaded + operator to subtract
    Number result = num1 + num2;

    cout << "Result of num1 + num2: " << result.getValue() << endl;

    return 0;
}
// run time polymorphism same function in two different parent and child and have different work then child will call