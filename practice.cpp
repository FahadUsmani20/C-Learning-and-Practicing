#include<iostream>

using namespace std;

class Node
{
    public:

    int value;
    Node* next;
    Node* prev;

    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Deleted Value: " << this->value << endl;
        delete next;
        delete prev;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Traversing a Linked List
void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Length of a Linked List
int getLength(Node* head)
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

// Inserting elements in a Doubly Linked List
void insertAtHead(Node* &head, Node* &tail, int value)
{
    if(head == NULL)
    {
        Node* temp = new Node(value);
        head = temp;
        tail = temp;
        return;
    }

    Node* temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//Inserting element at the end
void insertAtTail(Node* &head ,Node* &tail, int value)
{
    if(tail == NULL)
    {
        Node* temp = new Node(value);
        head = temp;
        tail = temp;
        return;
    }

    Node* temp = new Node(value);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

// Inserting at a postion

void insertAtPosition(Node* &head, Node* &tail, int position, int value)
{
    // Insert at start
    if(position == 1)
    {
        insertAtHead(head, tail, value);
        return;
    }

    // Insert at tail
    if(position == getLength(head)+1)
    {
        insertAtTail(head, tail, value);
        return;
    }

    // Insert at Position
    Node* curr = head;
    Node* temp = new Node(value);

    for(int i = 1; i< position-1; i++)
    {
        curr = curr->next;
    }

    temp->prev = curr;
    temp->next = curr->next;
    
    curr->next->prev = temp;
    curr->next = temp;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 0);
    print(head);
    
    insertAtTail(head, tail, 2);
    print(head);

    insertAtPosition(head, tail, 2, 1);
    print(head);
    
    insertAtPosition(head, tail, 1, 0);
    print(head);
    
    cout << getLength(head) << endl;

    insertAtPosition(head, tail, 5, 3);
    print(head);

    return 0;
}