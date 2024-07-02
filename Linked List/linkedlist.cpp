#include<iostream>
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

        ~Node()
        {
            int value = this->data;
            
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }

            cout << "Deleted Value: " << value << endl;
        }
};

void insertAtHead(Node* &head, int d) // Insert at the start
{
    // New Node Create:
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int d) // Insert at the end
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1)
    {
        insertAtHead(head, data); // Insert at the start
        return;
    }
    
    Node* temp = head;

    // Move to Position
    for(int i = 1; i < position-1; i++)
    {
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        insertAtEnd(tail, data); // Insert at the end
        return;
    }

    Node* insert = new Node(data);
    
    insert->next = temp->next; // Set the next of new node to the next element of the list
    temp->next = insert; // Change the next position of the list to insert node

}

// Deletion in Linked List
void deleteNode(Node*& head, int position)
{
    if(position == 1) // Delete First Node
    {
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp; // Free the memory
    }

    else // Delete node at position
    {
        Node* curr = head;
        Node* prev = NULL;

        for(int i = 1; i < position; i++)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        curr->next = NULL;
        delete curr;
    }
}


void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Node* node1 = new Node(5);
    
    Node* head = node1;
    Node* tail = node1;
    

    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    insertAtMiddle(head, tail, 1, 0);
    insertAtMiddle(head, tail, 6, 5);

    insertAtEnd(tail, 6);
    insertAtEnd(tail, 7);
    insertAtEnd(tail, 8);
    insertAtEnd(tail, 9);
    insertAtEnd(tail, 10);

    insertAtMiddle(head, tail, 13, 11);

    deleteNode(head, 1);
    deleteNode(head, 5);
    deleteNode(head, 11);
    print(head);

    return 0;
}