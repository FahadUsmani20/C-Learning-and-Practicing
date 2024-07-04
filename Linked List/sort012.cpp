#include<iostream>
#include<map>
using namespace std;

// Insertion in Linked List
class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this -> data = data;
            this->next = NULL;
        }
};

void insertAtEnd(Node* &tail, int d) // Insert at the end
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

/*
Sort 0, 1, 2 in linked list

Approach 1 - Time Complexity: O(N)
Change the data
*/
void sort1(Node* head)
{
    int zeros = 0;
    int ones = 0;
    int twos = 0;

    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            zeros++;
        }
        else if(temp->data == 1)
        {
            ones++;
        }
        else if(temp->data == 2)
        {
            twos++;
        }
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL)
    {
        if(zeros != 0)
        {
            temp->data = 0;
            zeros--;
        }
        else if(ones != 0)
        {
            temp->data = 1;
            ones--;
        }
        else if (twos != 0)
        {
            temp->data = 2;
            twos--;
        }

        temp = temp->next;
    }
}

/*
Approach 2: Time Complexity- O(N)
Change the pointers
*/

void insertAtTail(Node* &temp, Node* curr)
{
    temp->next = curr;
    temp = curr;
}

void sort2(Node* &head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
   
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    // Create Seperate Lists
    while(curr != NULL)
    {
        int value = curr->data;

        if(value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        
        else if(value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        
        else if(value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        
        curr = curr->next;
    }

    // Merge The Lists
    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // Setup Head
    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;
}


void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(1);
    
    Node* head = node1;
    Node* tail = node1;

    insertAtEnd(tail, 0);
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 1);
    insertAtEnd(tail, 0);
    insertAtEnd(tail, 2);
    cout << "Initial List: " <<endl;
    print(head);

    
    //sort1(head);
    sort2(head);
    cout << "Updated List: " <<endl;
    print(head);

    return 0;
}