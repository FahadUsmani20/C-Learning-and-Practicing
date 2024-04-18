#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val)
{
    Node* n = new Node(val);
    Node* temp = head;

    if(head == NULL)
    {
        head = n;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtHead(Node* &head, int val)
{
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void deleteAtHead(Node* &head)
{
    if(head == NULL)
    {
        return;
    }
    Node* temp = head;
    head = head->next;

    delete temp;
}

void deleteAtTail(Node* & head)
{
    if(head == NULL)
    {
        return;
    }

    if(head->next == NULL)
    {
        deleteAtHead(head);
    }

    Node* temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = NULL;

    delete del;
}

void deletion(Node* &head, int val)
{
    if(head == NULL)
    {
        return;
    }
    
    if(head->next == NULL && head->data == val)
    {
        deleteAtHead(head);
    }

    Node* temp = head;

    while(temp->next->next != NULL)
    {
        if(temp->next->data == val)
        {
            break;
        }
        temp = temp->next;
    }

    Node* del = temp->next;
    temp->next = temp->next->next;

    delete del;
}

bool search(Node* head, int key)
{
    Node* temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

Node* reverse(Node* &head)
{   
    Node* prevptr = NULL;
    Node* currentptr = head;
    Node* nextptr;

    while(currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        
        prevptr = currentptr;
        currentptr = nextptr;
    }

    return prevptr;
}

Node* reverseRecursive(Node* &head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

Node* reverseK(Node* &head, int k)
{
    Node* prevptr = NULL;
    Node* currentptr = head;
    Node* nextptr;

    int count = 0;

    while(currentptr != NULL && count < k)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
        count++;
    }

    if(nextptr != NULL)
    {
        head->next = reverseK(nextptr, k);
    }

    return prevptr;
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
    insertAtTail(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);
    // head = reverseRecursive(head);
    head = reverseK(head, 2);
    display(head);

    return 0;
}