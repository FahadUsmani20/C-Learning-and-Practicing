#include<iostream>

using namespace std;

//Two Pointer Approach [Slow-Fast Pointer Approach]

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

bool detectCycle(Node* head)
{
    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}


void makeCycle(Node* head, int pos)
{
    Node* temp = head;
    Node* startNode;

    int count = 1;

    while(temp->next != NULL)
    {
        if(count == pos)
        {
            startNode = temp;
        }

        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}

void removeCycle(Node* head)
{
    Node* fast = head;
    Node* slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow != fast);

    fast = head;

    while(slow->next != fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
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
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    makeCycle(head, 3);
    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;

    display(head);
    
    

    return 0;
}