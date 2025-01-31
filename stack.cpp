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