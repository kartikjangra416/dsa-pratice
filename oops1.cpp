#include <iostream>
using namespace std;
// user defined data type
class game
{


    int health;
    // properties
    public:
    // constructor
    game(){
        cout<<endl<<"this is a constructor"<<endl;
    }
    // parameterised constructor
    game(int health){
        cout<<"this->"<<this<<endl;
        this->health =health;
    }
    int score;
    char level;

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
};
int main()
{
    // object
    // dynamic allocation 
    game*g2=new game(50);//parameterised constructor can be used to initalize the things while creating constructor

    (*g2).sethealth(80);
    (*g2).level='B';
    (*g2).score=1300;
    cout<<"adress of g2 is:"<<g2<<endl;
    cout<<sizeof(g2)<<endl;
    cout<<"health:"<<g2->gethealth()<<endl;
    cout<<"level:"<<(*g2).level<<endl;
    cout<<"score:"<<(*g2).score<<endl<<endl;
    // static allocation
    game g1;
    g1.sethealth(70);
    g1.level='A';
    g1.score=1200;

    cout<<endl<<sizeof(g1)<<endl;
    cout<<"health:"<<g1.gethealth()<<endl;
    cout<<"level:"<<g1.level<<endl;
    cout<<"score:"<<g1.score<<endl<<endl;

    // copy constructor
    game g3(*g2);
    cout<<endl<<sizeof(g3)<<endl;
    cout<<"health:"<<g3.gethealth()<<endl;
    cout<<"level:"<<g3.level<<endl;
    cout<<"score:"<<g3.score<<endl<<endl;

}