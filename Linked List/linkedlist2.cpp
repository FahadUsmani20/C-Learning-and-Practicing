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

int get_len(Node* head)
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

Node* merge(Node* head1, Node* head2)
{
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* dummy = new Node(-1);
    Node* ptr3 = dummy;

    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;

        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while(ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while(ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }


    return dummy->next;


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
    Node* head1 = NULL;
    Node* head2 = NULL;
    insertAtTail(head1, 0);
    insertAtTail(head1, 4);
    insertAtTail(head1, 9);
    insertAtTail(head2, 1);
    insertAtTail(head2, 4);
    insertAtTail(head2, 8);

    display(head1);
    display(head2);
    
    display(merge(head1, head2));

    return 0;
}