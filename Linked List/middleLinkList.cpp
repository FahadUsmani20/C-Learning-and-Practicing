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
    Node* node1 = new Node(3);
    
    Node* head = node1;
    Node* tail = node1;
    
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    insertAtEnd(tail, 4);
    insertAtEnd(tail, 5);
    print(head);

    return 0;
}