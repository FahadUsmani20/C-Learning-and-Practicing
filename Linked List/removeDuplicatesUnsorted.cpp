#include<iostream>
#include<map>
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
};

void insertAtEnd(Node* &tail, int d) // Insert at the end
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

// Deleting Duplicate Elements in an UnSorted List
Node* uniqueList(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    map<Node*, bool> n;

    Node* curr = head;

    while(curr != NULL)
    {
        if(curr->next != NULL && curr->data == curr->next->data)
        {
            Node* nextNode = curr->next->next; // Next Pointer to check
            Node* nodeDelete = curr->next; // Node to Delete
            delete(nodeDelete); // Delete Node
            curr->next = nextNode; // Set next as the next to next Node
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
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
    Node* node1 = new Node(1);
    
    Node* head = node1;
    Node* tail = node1;

    insertAtEnd(tail, 1);
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);
    insertAtEnd(tail, 3);
    cout << "Initial List: " <<endl;
    print(head);

    Node* temp = uniqueSortedList(head);
    
    cout << "Updated List: " <<endl;
    print(temp);

    return 0;
}