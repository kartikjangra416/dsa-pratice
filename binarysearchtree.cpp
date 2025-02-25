#include<iostream>
#include <queue>
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

 node* insertintobst(node* root,int data){

    if(root==NULL){
        root=new node(data);
        return root;
    }

    if(data>root->data){
        //right part me insert karana  hai
        root->right=insertintobst(root->right,data);  
    }else{
        // left part me insert karna hai 

        root->left=insertintobst(root->left,data);
    }
    return root ;

}
 void takeinput(node*&root){



    int value;
    cin>>value;
    while(value!=-1){
        root=insertintobst(root,value);
        cin>>value;
    }
}
void levelOrderTraversal(node* root){
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
            
        q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    
}
}
bool search(node* root,int data){


    if(root==NULL){return false;}
    if(root->data==data){return true;}
    if(root->data>data){search(root->left,data);}
    else{
        search(root->right,data);
    }

}
node* minm(node*root){
    node*temp=root;
    while(temp->left!=NULL){

        temp=temp->left;
    }
    return temp;

}
node* deletenode(node*root,int x){
    if(root==NULL){
        return root;
    }
         
    if (root->data==x){
        // 0child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1child
       
            if(root->right!=NULL && root->left==NULL){
               node* temp=root->right;
               delete root;
               return temp;

            }
            if(root->left!=NULL && root->right==NULL){
                node* temp=root->left;
                delete root;
                return temp;
 
            }
        
        // 2child
        if(root->left!=NULL && root->right!=NULL){

            node* minnode=minm(root->right);
            root->data=minnode->data;
            root->right=deletenode(root->right,minnode->data);
            return root;

        }

    }else if(root->data>x){
        // left part me jao
        root->left=deletenode(root->left,x);
        // return root;
    }else{
        // right part me jao
        root->right=deletenode(root->right,x);
        // return root;
    }
    return root;

}
int main(){


    node* root=NULL;
    
    cout<<"enter the value for creating BST"<<endl;
    

    takeinput(root);

    cout<<"printint the BST"<<endl;

    levelOrderTraversal(root);

    cout<<"enter the key you want to search"<<endl;
    int d;
    cin >>d;

    bool ans=search(root,d);

    if(ans){
        cout<<"the key is found"<<endl;
    }else{
        cout<<"the key is not found"<<endl;
    }


    root=deletenode(root,30);
    root=deletenode(root,90);
    root=deletenode(root,50);
    
    cout<<"after deletion "<<endl;
    levelOrderTraversal(root);


}