#include<iostream>
using namespace std;
class node{


    public:

    int data;
    node* left;
    node* right;

    node(int data){

        this->data=data;
        left=NULL;
        right=NULL;
    }


};

 node* insertintobst(node*&root,int data){

    if(root==NULL){
        root==new node(data);
        return root;
    }

}
 void takeinput(node*&root){



    int value;
    cin>>value;
    while(value!=-1){
        insertintobst(root,value);
        cin>>value;
    }
}
int main(){


    node* root=NULL;
    
    cout<<"enter the value for first node"<<endl;
    

    takeinput(root);





}