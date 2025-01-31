// // // sinlgy linked list
// // #include <iostream>
// // using namespace std;
// // class node
// // {
// // public:
// //     int data;

// //     node *next;

// //     node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };
// // void insertathead(int data, node *&head)
// // {
// //     node *temp = new node(data);
// //     temp->next = head;
// //     head = temp;
// // }
// // void insertattail(int data, node *&tail)
// // {
// //     node *temp = new node(data);
// //     tail->next = temp;
// //     tail = temp;
// // }
// // void insertatposition(int data, int position, node *&head, node *&tail)
// // {
// //     // insert at Start
// //     if (position == 1)
// //     {
// //         insertathead(data, head);
// //         return;
// //     }
// //     int cnt = 1;
// //     node *temp = head;
// //     while (cnt < position - 1)
// //     {
// //         temp = temp->next;
// //         cnt++;
// //     }
// //     // inserting at Last Position
// //     if (temp->next == NULL)
// //     {
// //         insertattail(data, tail);
// //         return;
// //     }
// //     node *nodetoinsert = new node(data);
// //     nodetoinsert->next = temp->next;
// //     temp->next = nodetoinsert;
// // }
// // void deletelinklist(int position, node *&head,node*&tail)
// // {
// //     // Check if the list is empty
// //     if (head == NULL)
// //     {
// //         cout << "List is empty" << endl;
// //         return;
// //     }

// //     // Handle deletion at the head
// //     if (position == 1)
// //     {
// //         node *temp = head;
// //         head = head->next;
// //         temp->next = NULL;
// //         delete temp;
// //         // If the list is now empty
// //         if (head == NULL) { tail = NULL; }
// //         return;
// //     }
// //     int cnt = 1;
// //     node *temp = head;
// //     while (cnt < position - 1)
// //     {
// //         if (temp->next == NULL)
// //         {
// //             cout << "Position out of range" << endl;
// //             return;
// //         }
// //         cnt++;
// //         temp = temp->next;
// //     }
// //     node *ptr = temp->next;
// //     // Update the tail if we're deleting the last node
// //     if (ptr->next == NULL) { tail = temp;}

// //     temp->next = ptr->next;
// //     ptr->next=NULL;
// //     delete ptr;
// //     return;

// // }
// // void print(node *head)
// // {
// //     if (head == NULL)
// //     {
// //         cout << "List is empty " << endl;
// //         return;
// //     }
// //     node *temp = head;
// //     while (temp != NULL)
// //     {
// //         cout << temp->data << endl;
// //         temp = temp->next;
// //     }
// //     return;
// // }
// // int main()
// // {
// //     node *node1 = new node(10);
// //     node *head = node1;
// //     node *tail = node1;
// //     insertathead(9, head);
// //     insertattail(12, tail);
// //     insertatposition(11, 3, head, tail);
// //     insertatposition(13, 5, head, tail);
// //     print(head);
// //     cout << endl
// //          << endl;
// //     deletelinklist(1, head,tail);
// //     deletelinklist(3, head,tail);
// //     deletelinklist(3, head,tail);
// //     print(head);
// // }

// // /*doubly linked list*/
// // #include <iostream>
// // using namespace std;
// // class node
// // {
// // public:
// //     node *prev;
// //     int data;
// //     node *next;
// //     node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //         this->prev = NULL;
// //     }
// // };
// // void print(node *head)
// // {
// //     if (head == NULL)
// //     {
// //         cout << "List is empty" << endl;
// //         return;
// //     }
// //     node *temp = head;
// //     while (temp != NULL)
// //     {
// //         cout << temp->data;
// //         temp = temp->next;
// //         cout << endl;
// //     }
// // }
// // int length(node *head)
// // {
// //     node *temp = head;
// //     int cnt = 0;
// //     while (temp != NULL)
// //     {
// //         cnt++;
// //         temp = temp->next;
// //     }
// //     return cnt;
// // }
// // void insertathead(int data, node *&head, node *&tail)
// // {
// //     node *nodetoinsert = new node(data);
// //     nodetoinsert->next = head;
// //     if (head != NULL)
// //     {
// //         head->prev = nodetoinsert;
// //     }
// //     else
// //     {
// //         tail = nodetoinsert; // Update tail if the list is initially empty
// //     }
// //     head = nodetoinsert;
// // }
// // void insertattail(int data, node *&head, node *&tail)
// // {

// //     node *nodetoinsert = new node(data);
// //     // if the list is empty
// //     if (tail == NULL)
// //     {
// //         head = nodetoinsert;
// //         tail = nodetoinsert;
// //     }
// //     else
// //     {
// //         tail->next = nodetoinsert;
// //         nodetoinsert->prev = tail;
// //         tail = nodetoinsert;
// //     }
// // }
// // void insertatposition(int data, node *&head, node *&tail, int position)
// // {
// //     if (position == 1)
// //     {
// //         insertathead(data, head, tail);
// //         if (head->next == NULL)
// //         {
// //             tail = head;
// //         }
// //         return;
// //     }
// //     node *temp = head;
// //     int cnt = 1;
// //     while (cnt < position - 1)
// //     {
// //         cnt++;
// //         temp = temp->next;
// //     }
// //     if (temp == NULL || (temp->next == NULL && cnt < position - 1))
// //     {
// //         cout << "Position out of range" << endl;
// //         return;
// //     }
// //     // if last position
// //     if (temp->next == NULL)
// //     {
// //         insertattail(data, head, tail);
// //         return;
// //     }
// //     // insert at any other position
// //     node *nodetoinsert = new node(data);
// //     nodetoinsert->next = temp->next;
// //     temp->next->prev = nodetoinsert;
// //     temp->next = nodetoinsert;
// //     nodetoinsert->prev = temp;
// // }
// // void deletelist(node *&head, node *&tail, int position)
// // {
// //     if (head == NULL)
// //     {
// //         cout << "List is empty" << endl;
// //         return;
// //     }
// //     node *temp = head;
// //     if (position == 1)
// //     {
// //         head = temp->next;
// //         if (head != NULL)
// //         {
// //             head->prev = NULL;
// //         }
// //         else
// //         {
// //             tail = NULL;
// //         }

// //         delete temp;
// //         return;
// //     }

// //     int cnt = 1;
// //     while (cnt < position - 1 && temp != NULL)
// //     {
// //         temp = temp->next;
// //         cnt++;
// //     }
// //     if (temp == NULL || temp->next == NULL)
// //     {
// //         cout << "Position out of range" << endl;
// //         return;
// //     }
// //     node *nodetodelete = temp->next;

// //     if (nodetodelete->next == NULL)
// //     {
// //         tail = temp;
// //         tail->next = NULL;

// //     }
// //     else
// //     {
// //         temp->next = nodetodelete->next;
// //         nodetodelete->next->prev = temp;
// //     }
// //     delete nodetodelete;
// //     return;
// // };
// // int main()
// // {

// //     node *node1 = new node(10);
// //     node *head = node1;
// //     node *tail = node1;

// //     // node *head = NULL;
// //     // node *tail = NULL;
// //     print(head);
// //     int len = length(head);
// //     cout << "length of the linkedlist is:" << len;
// //     insertathead(9, head, tail);
// //     cout << endl
// //          << "after insertion at the head" << endl;
// //     print(head);
// //     insertattail(11, head, tail);
// //     cout << endl
// //          << "after insertion at the tail" << endl;
// //     print(head);
// //     insertatposition(1111, head, tail, 3);
// //     insertatposition(1111, head, tail, 1);
// //     insertatposition(1111, head, tail, 6);
// //     cout << endl
// //          << "after insertion at any position" << endl;
// //     print(head);

// //     deletelist(head, tail, 1);
// //     deletelist(head, tail, 3);
// //     deletelist(head, tail, 2);
// //     cout << "after deletion" << endl;
// //     print(head);
// // }
/*circular linked list*/
// #include <iostream>
// #include <map>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     ~node()
//     {

//         int value = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << "memory is free for node with data " << value << endl;
//     };
// };
// void insertattail(node *&tail, int data, int element)
// {
//     node *nodetoinsert = new node(data);
//     if (tail == NULL)
//     {
//         tail = nodetoinsert;
//         tail->next = tail;
//     }
//     else
//     {
//         node *current = tail;
//         while (current->data != element)
//         {
//             current = current->next;
//         }

//         nodetoinsert->next = current->next;
//         current->next = nodetoinsert;
//         // tail = nodetoinsert;
//     }
// }
// void deletenode(node *&tail, int element)

// {
//     {
//         if (tail == NULL)
//         {
//             cout << "List is empty" << endl;
//             return;
//         }
//         // If the list contains only one node
//         if (tail == tail->next && tail->data == element)
//         {
//             delete tail;
//             tail = NULL;
//             return;
//         }
//         node *prev = tail;
//         node *current = prev->next;
//         while (current->data!=element)
//         {
//             prev=current;
//             current=prev->next;
//         }

//         prev->next=current->next;
//         if (tail==current)
//         {
//             tail=prev;
//         }

//         current->next=NULL;
//         delete current;
//     }
// }

// void print(node *tail)
// {
//     if (tail == NULL)
//     {
//         cout << "List is empty" << endl;
//         return;
//     }
//     else
//     {
//         node *temp = tail;
//         while (temp->next != tail)
//         {
//             cout << temp->data << endl;
//             temp = temp->next;
//         }
//         cout << temp->data << endl;
//     }
// }
// bool detectloop(node*head){
// if (head==NULL)
// {
//     return false;
// }
// map<node*,bool > visited;
// node *temp=head;
// while (temp!=NULL)
// {
//     if (visited [temp]==true)
//     {
//         return true;
//     }

//   visited [temp]=true;
//   temp=temp->next;

// }
// return false;

// }
// int main()
// {
//     node *tail = NULL;
//     insertattail(tail, 10, 1);
//     insertattail(tail, 11, 10);
//     insertattail(tail, 13, 11);
//     insertattail(tail, 12, 11);
//     deletenode(tail, 12);
//     deletenode(tail, 13);
//     deletenode(tail, 10);

//     print(tail);
// }

/*reverse a linked list*/
#include <iostream>
#include <map>
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
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memorey free for the node with data" << value << endl;
    }
};
void insertathead(int data, node *&head, node *&tail)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        node *nodetoinsert = new node(data);
        node *temp = head;
        nodetoinsert->next = temp;
        head = nodetoinsert;
    }
}
void insertattail(int data, node *&head, node *&tail)
{
    if (tail == NULL)
    {
        node *nodetoinsert = new node(data);
        head = nodetoinsert;
        tail = nodetoinsert;
    }
    else
    {
        node *nodetoinsert = new node(data);
        node *temp = tail;
        temp->next = nodetoinsert;
        tail = nodetoinsert;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    // cout<<head<<endl<<tail<<endl;
}
void reverselist(node *&head, node *&tail)
{
    node *prev = NULL;
    node *current = head;
    node *next = NULL;
    tail = head; // after reversing the orignal head is now tail
    int cnt = 0;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        cnt++;
    }
    head = prev;
    cout << "size of the list is :" << cnt << endl;
}
node *reverseKgroup(node *&head, int k, node *&tail)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *current = head;
    node *Next = NULL;
    node *prev = NULL;
    tail = head;
    int cnt = 0;
    // Check if there are at least k nodes to reverse
    node *temp = head;
    for (int i = 0; i < k; ++i)
    {
        if (temp == NULL)
        {
            return head; // Less than k nodes, return head as is } temp = temp->next;
        }
    }
    while (current != NULL && cnt < k)
    {
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
        cnt++;
    }
    if (Next != NULL)
    {

        head->next = reverseKgroup(Next, k, tail);
    }

    head = prev;
    return head;
}
bool iscircular(node *&head)
{
    if (head == NULL)
    {
        return true;
    }
    bool value = false;
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return value;
    }
    else
    {
        return false;
    }
}

int middleoflist(node *&head)
{

    node *temp = head;
    node *temp1 = head;

    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next->next;
        temp1 = temp1->next;
    }

    return temp1->data;
}
bool detectloop(node *&head)
{
    map<node *, bool> visited;
    node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

bool floyddetectloop(node *head, node *&loop_start)
{
    if (head == NULL)
    {
        return false;
    }
    node *fast = head;
    node *slow = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        { // Loop detected, find the start of the loop
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            loop_start = slow; // The starting point of the loop
            return true;
        }
    }
    return false;
}
void removeLoop(node *loop_start, node *head)
{

    node *ptr1 = loop_start;
    node *ptr2 = loop_start;
    while (ptr1 != ptr2->next)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = NULL;
}
void removeduplicate(node *&head, node *&tail)
{
    if (head == NULL)
        return; // If the list is empty
    node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            node *nodetodelete = temp->next;
            temp->next = nodetodelete->next;
            nodetodelete->next = NULL;
            delete nodetodelete;
            if (temp->next == NULL)
            {
                tail = temp;
            }
        }
        else
        {
            temp = temp->next;
        }
    }
}
node *solve(node *&first, node *&second)
{

    node *current1 = first;
    node *next1 = current1->next;
    node *current2 = second;
    node *next2 = current2->next;
    while (next1 != NULL && current2 != NULL)
    {
        if (current2->data >= current1->data && current2->data <= next1->data)
        {
            current1->next = current2;
            next2 = current2->next;
            current2->next = next1;
            current1 = current2;
            current2 = next2;
        }
        else
        {
            current1 = next1;
            next1 = next1->next;
            if (next1 == NULL)
            {
                current1->next = current2;
                return first;
            }
        }
    }
    return first;
}
node *mergetwosortedlist(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data <= head2->data)
    {
        solve(head1, head2);
    }
    else
    {
        solve(head2, head1);
    }
}
bool ispallin(node *head, node *tail)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // Find the middle of the linked list
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // Reverse the second half of the list
    node *prev = NULL;
    node *current = slow;
    node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    // Compare the first half with the reversed second half
    node *firstHalf = head;
    node *secondHalf = prev;
    while (secondHalf != NULL)
    {
        if (firstHalf->data != secondHalf->data)
        {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return true;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertathead(10, head, tail);

    insertathead(9, head, tail);
    insertattail(11, head, tail);
    insertattail(12, head, tail);
    insertattail(13, head, tail);
    insertattail(14, head, tail);
    print(head);
    reverselist(head, tail);
    print(head);
    cout << "middle of the list is :" << middleoflist(head) << endl;
    reverseKgroup(head, 2, tail);
    print(head);

    bool value = iscircular(head);
    if (value == 0)
    {
        cout << "false:the list is not circular" << endl;
    }
    else
    {
        cout << "true: the list is circular" << endl;
    }
    tail->next = head->next;
    if (detectloop(head))
    {
        cout << "the loop is presented at the element :" << head->data << endl;
        cout << "yes:the list has loop" << endl;
    }
    else
    {
        cout << "no:the list has no loop" << endl;
    }
    node *loop_start = NULL;
    if (floyddetectloop(head, loop_start))
    {
        cout << "The loop starts at the element: " << loop_start->data << endl;
        cout << "Yes: the list has a loop detected by Floyd's algorithm" << endl;
    }
    else
    {
        cout << "No: the list has no loop detected by Floyd's algorithm" << endl;
    }
    // print(head);
    removeLoop(loop_start, head);
    insertattail(10, head, tail);
    insertattail(10, head, tail);
    insertattail(16, head, tail);
    insertattail(16, head, tail);
    insertattail(20, head, tail);

    print(head);
    removeduplicate(head, tail);
    print(head);

    node *node1 = new node(1);
    node *head1 = node1;
    node *tail1 = node1;
    insertattail(3, head1, tail1);
    insertattail(5, head1, tail1);

    node *node2 = new node(2);
    node *head2 = node2;
    node *tail2 = node2;
    insertattail(4, head2, tail2);
    insertattail(5, head2, tail2);
    node *mergehead = mergetwosortedlist(head1, head2);
    print(mergehead);

    node *pallin = new node(1);
    node *start = pallin;
    node *end = pallin;
    insertattail(2, start, end);
    insertattail(1, start, end);
    bool ans=ispallin(start, end);
    cout<<endl <<ans<<endl;
}