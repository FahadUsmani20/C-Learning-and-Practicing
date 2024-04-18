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
    Node* temp = head;

    
    if(head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    while(temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val)
{
    if(head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;

    if(head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    while(temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void deleteAtHead(Node* head)
{
    Node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }

    Node* del = head;
    temp->next = head->next;

    head = head->next;

    delete del;

}

void deletion(Node* head, int pos)
{
    if(pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count != pos-1)
    {
        temp = temp->next;
        count++;
    }

    Node* del = temp->next;
    temp->next = temp->next->next;

    delete del;
}

void display(Node* head)
{
    Node* temp = head;
    do
    {
        cout << temp->data<<"->";
        temp = temp->next;
    }
    while (temp != head);
    cout<< endl;
}


int main()
{
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);

    //deletion(head, 5);
    //display(head);
    deletion(head, 1);
    display(head);


    return 0;
}