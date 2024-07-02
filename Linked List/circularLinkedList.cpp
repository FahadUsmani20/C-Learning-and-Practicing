#include<iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

        Node(int value)
        {
            this->value = value;
        }

        ~Node()
        {
            cout << "Deleted Value: " << this->value<<endl;
            delete next;
            next = NULL;
        }
};

// Inserting Element in a Circular Linked List
void insertNode(Node* &tail, int element, int d)
{
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* curr = tail;

        while(curr->value != element)
        {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        
        tail = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail->next;

    while(temp->value != tail->value)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << temp->value << " " << endl;

}

// Deleting Element in a Circular Linked List
void deleteNode(Node* &tail, int ele)
{
    if(tail == NULL)// If list is empty
    {
        cout << "List is Empty!" << endl;
        return;
    }

    Node* prev = tail; // Previous Node as tail
    Node* curr = prev->next; // Current Node as the head

    while(curr->value != ele && curr->value != tail->value)
    {
        prev = curr;
        curr = curr->next;
    }

    if(curr->value == tail->value && curr->value != ele) // Check if element is present
    {
        cout << "Element Not Present in the list." << endl;
        return;
    }

    prev->next = curr->next; // If element is present
    
    if(tail == curr)
    {
        tail = prev;
    }

    curr->next = NULL;

    delete curr;
}

int main()
{
    Node* tail = NULL;
    insertNode(tail, 0, 0);
    insertNode(tail, 0, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);

    print(tail);

    deleteNode(tail, 0);
    print(tail);
    
    deleteNode(tail, 4);
    print(tail);
    
    deleteNode(tail, 2);
    print(tail);
    
    deleteNode(tail, 2);
    print(tail);
    return 0;
}