#include<iostream>

using namespace std;

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

void deleteAtHead(Node* &head)
{
    if(head == NULL)
    {
        return;
    }

    Node* temp = head;
    head = head->next;
    head->prev = NULL;

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
    

    if(temp->next->next == NULL && temp->next->data == val)
    {
        deleteAtTail(head);
    }

    Node* del = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

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
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);
    insertAtHead(head, 7);
    display(head);
    deleteAtTail(head);
    //deletion(head, 6);
    display(head);

    return 0;
}