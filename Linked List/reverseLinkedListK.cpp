#include<iostream>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }

        ~Node()
        {
            cout << "Deleted Value: " << val << endl;
            delete next;
            this->next = NULL;
        }
};

Node* reverseK(Node* head, int k) // Time Complexity O(N)
{
    if(head == NULL)
    {
        return NULL;
    }

    //Step1: Reverse first K nodes
    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;

    int count = 0;

    while(curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //Step 2: Use recursion to solve the rest of the list

    if(next != NULL)
    {
        head->next = reverseK(next, k);
    }

    // Step 3: Return head of reversed list
    return prev;
}

void insertAtEnd(Node* &head, int val)
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


void display(Node* head)
{
    Node* temp = head;
    if (head == NULL)
    {
        return;
    }


    while(temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout<<"NULL"<< endl;
}


int main()
{
    Node* temp = NULL;
    Node* head = NULL;
    insertAtEnd(temp, 3);
    insertAtEnd(temp, 2);
    insertAtEnd(temp,1);
    insertAtEnd(temp,4);
    insertAtEnd(temp,5);
    insertAtEnd(temp,6);
    insertAtEnd(temp,-1);

    cout << "List: " << endl;
    display(temp);
    
    head = reverseK(temp, 2);
    cout << "Reverse K List: " << endl;
    display(head);


    return 0;
}