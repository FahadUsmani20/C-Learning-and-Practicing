#include<iostream>
#include<cmath>

using namespace std;
//Append last k nodes to the start of link list
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node* &head, int val)
{
    Node* n = new Node(val);
    n->next = head;
    if(head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

void insertAtTail(Node* &head, int val)
{
    Node* n = new Node(val);
    Node* temp = head;

    if(head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

int get_len(Node* head)
{
    int len = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

Node* appendk(Node* head, int k)
{
    Node* newHead;
    Node* newTail;
    Node* tail = head;

    int len = get_len(head);
    int count = 1;

    k = k%len;

    
    while(tail->next != NULL)
    {
        if(count == len-k)
        {
            newTail = tail;
            cout << newTail->data <<endl;
        }

        if(count == len-k+1)
        {
            newHead = tail;
        }

        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;
    return newHead;
}

void display(Node* head)
{
    Node* temp = head;
    if (head == NULL)
    {
        return;
    }


    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<< endl;
}


int main()
{
    Node* head = NULL;
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);

    display(head);
    
    display(appendk(head, 4));

    return 0;
}