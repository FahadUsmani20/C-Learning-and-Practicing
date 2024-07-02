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

// Iterative Solution
void reverse1(Node* &head)
{
    Node* prev = NULL; // Prev Pointer
    Node* curr = head; // Current Pointer 

    while(curr != NULL) // While Current Pointer is not at the end
    {
        Node* forward = curr->next; // Forward Pointer pointing to next element
        curr->next = prev; // point the current pointer to previous pointer
        prev = curr; // Set previous pointer to current pointer
        curr = forward; // Set current pointer to next pointer
    }
    // Current pointer is pointing to null
    head = prev; // Previous pointer is pointing to last element hence make head as the prev.
}

void reverse2(Node* &head, Node* curr, Node* prev)
{
    if(curr == NULL)
    {
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse2(head, forward, curr);
    curr->next = prev;
}

Node* reverse3(Node* &head)
{
    if(head == NULL || head->next == NULL) // If the list is empty or 1 element is present
    {
        return head;
    }

    Node* end = reverse3(head->next); // Traverse to the end and return the last element
    
    head->next->next = head; // Mark the next of the next element back to current head
    head->next = NULL;// Mark the next of current head to null

    return end; // Return end as it is the new head
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

    reverse1(head);
    cout << "Reverse Linked List Iteratively:" << endl;
    print(head);
    
    cout << "Reverse Linked List Recursively:" << endl;
    Node* curr = head;
    Node* prev = NULL;
    reverse2(head, curr, prev);
    print(head);
    
    cout << "Reverse Linked List Recursively using only Head:" << endl;
    Node* newHead = reverse3(head);
    print(newHead);

    return 0;
}