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

// Merge Two Sorted Linked Lists

void solve(Node* &head1, Node* &head2)
{
    // If Only one element is present in the list
    if(head1->next == NULL)
    {
        head1->next = head2;
        return;
    }

    Node* curr1 = head1;
    Node* curr2 = head2;
    
    Node* nextNode1 = curr1->next;
    Node* nextNode2 = curr2->next;

    while(nextNode1 != NULL && curr2 != NULL)
    {
        if(curr2->data >= curr1->data && curr2->data <= nextNode1->data)
        {
            // Add Nodes in between the first list
            curr1->next = curr2;
            nextNode2 = curr2->next;
            curr2->next = nextNode1;

            // Update Pointers
            curr1 = curr2;
            curr2 = nextNode2;
        }
        else
        {
            //Move Current 1 and Next 1 
            curr1 = curr1->next;
            nextNode1 = nextNode1->next;

            // If Next 1 is NULL then add the remaining nodes in list 2
            if(nextNode1 == NULL)
            {
                curr1->next = curr2;
            }
        }
    }
}

Node* mergeSorts(Node* head1, Node* head2)
{
    if(head1 == NULL)
    {
        return head2;
    }
    
    if(head2 == NULL)
    {
        return head1;
    }

    if(head1->data <= head2->data)
    {
        solve(head1, head2);
    }
    else
    {
        solve(head2, head1);
    }

    return head1;
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
    Node* first = new Node(1);
    
    Node* head1 = first;
    Node* tail1 = first;
    insertAtEnd(tail1, 2);
    insertAtEnd(tail1, 3);
    insertAtEnd(tail1, 4);
    insertAtEnd(tail1, 5);
    insertAtEnd(tail1, 6);
    
    cout << "List 1: " <<endl;
    print(head1);

    Node* second = new Node(1);
    Node* head2 = second;
    Node* tail2 = second;
    insertAtEnd(tail2, 2);
    insertAtEnd(tail2, 3);
    insertAtEnd(tail2, 4);
    insertAtEnd(tail2, 5);
    insertAtEnd(tail2, 6);
    
    cout << "List 2: " <<endl;
    print(head2);


    
    head1 = mergeSorts(head1, head2);
    cout << "Sorted Merged List: " <<endl;
    print(head1);

    return 0;
}