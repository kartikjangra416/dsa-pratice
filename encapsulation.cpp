
// encapsulation 
// #include <iostream>
// using namespace std;
// class man
// {

//     string name;
//     int age;
//     int height;

// public:
//     int getage()
//     {
//         return this->age;
//     }
//     int getheight()
//     {
//         return this->height;
//     }
// };
// int main()
// {
//         man student;

// }

// // single inheritance parent child
// #include <iostream>
// using namespace std;

// class human
// {
//     public:
//     int height;
//     protected:
//     int weight;
//     private:
//     int age;

//     public:
//     int getage(){
//         return this->age;
//     }
//     int getheight(){
//         return this->height;
//     }
    
//     void setage(int age){
//         this->age = age;
//     }
//     void setheight(int height){
//         this->height = height;
//     }
//     void setweight(int weight){
//         this->weight = weight;
//     }
// };
// class male : public human {
//     public:
//     string color;
//     void sleep(){
//         cout << "male sleeping" << endl;
//     }
//     int getweight(){
//         return this->weight;
//     }
// };

// int main() {
//     male kartik;
//     kartik.setweight(100);
//     kartik.setheight(5);
//     kartik.setage(50);
//     kartik.color = "brown";
    
//     cout << kartik.getage() << endl;
//     cout << kartik.getheight() << endl;
//     cout << kartik.getweight() << endl;
//     cout << kartik.color << endl;
//     kartik.sleep();

//     return 0;
// }

// // multilevel inheritance 
// #include<iostream>
// using namespace std;
// class animal{
//     public:
//     int height ;
//     int weight;
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
// };
// class dog:public animal{

// };
// class pitbull:public dog{

// };
// int main()
// {
//   pitbull dog1;
//   dog1.height;
//   dog1.speak();

// }

// // multiple inheritance 
// #include<iostream>
// using namespace std;
// class animal{
//     public:
//     int height ;
//     int weight;
//     void bark(){
//         cout<<"barking"<<endl;
//     }
// };

// class human{
//     public:
//     void speak(){
//         cout<<"speaking"<<endl;
//     }

// };
// class hybrid:public animal,public human{
// };
// int main()
// {
//   hybrid object;
//   object.bark();
//   object.speak();

// }

// // 
// hierarchical inheritance  one class serve as parent for many chld class 
// hybrid inhertance combination of more that one type of inheritance 
// inheritance ambiguity to use function of same name for two parents use kartik.human::skeak
