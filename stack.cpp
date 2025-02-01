#include <iostream>
// #include <stack>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (next != NULL)
        {

            delete next;
            next = NULL;
        }
        cout << "node deleted with data:" << value << endl;
    }
};
class stack
{
    node *head;

public:
    stack() { head = NULL; }
    ~stack() { delete head; }
    void push(int data)
    {
        node *newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty, cannot pop." << endl;
            return;
        }
        node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return head->data;
    }
    bool empty() { return head == NULL; }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.pop();
    cout << "Printing top element: " << s.top() << endl;
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.pop();
    // cout<<"printing top element:"<<s.top()<<endl;
    // if (s.empty())
    // {
    //     cout<<"stack is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"stack is not empty"<<endl;

    // }

    
}

// // code to implement n stacks in the array 
// #include <bits/stdc++.h> 
// class NStack
// {
//     private:
//     int n,s;
//     int *arr;
//     int *top;
//     int *next;
//     int free;
// public:
//     // Initialize your data structure.
//     NStack(int N, int S)
//     {
//         arr=new int[S];
//         top=new int[N];
//         next=new int[S];
//         this->n=N;
//         this ->s=S;

//         for (int i = 0; i < N; i++) {
//             top[i] = -1;
//         }
//         free=0;
//         for (int i = 0; i < S - 1; i++) {
//             next[i] = i + 1;
//         }
//         next[S - 1] = -1;


//     }

//     // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
//     bool push(int x, int m)
//     {
        
//         // Check for overflow
//         if (free == -1) {
//             return false;
//         }
//         // Get the first free position
//         int i = free;
//         // Update free to next free slot
//         free = next[i];
//          // Insert x into the array
//         arr[i] = x;
//          // Update next to point to previous top
//         next[i] = top[m - 1];
//         // Update top to new value of i
//         top[m - 1] = i;
//         return true;
//     }

//     // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int pop(int m)
//     {
//         // Check for underflow
//         if (top[m - 1] == -1) {
//             return -1;
//         }
//         // Find index of top element in Mth stack
//         int i = top[m - 1];
//         // Update top to point to next element in the stack
//         top[m - 1] = next[i];
//         // Attach the previous top to the beginning of the free list
//         next[i] = free;
//         free = i;
        
//         return arr[i];
//     }
//     ~NStack(){
//         delete[] arr;
//         delete[] top;
//         delete[] next;
//     }
// };