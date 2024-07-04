#include<iostream>
#include<map>
#include<vector>
using namespace std;

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

/*
Merge Sort in a Linked List

Data Replacement Not Allowed
Change the links

*/ 
Node* getMiddle(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node* merge(Node* left, Node* right)
{
    if(left == NULL)
    {
        return right;
    }
    
    if(right == NULL)
    {
        return left;
    }
    
    Node* ans = new Node(-1);
    Node* temp = ans;

    // Merge Two Sorted Linked List
    while(left != NULL && right != NULL)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    // If left is empty and right has elements
    if (left == NULL && right != NULL)
    {
        temp->next = right;
    }
    
    // If right is empty and left has elements
    if(right == NULL && left != NULL)
    {
        temp->next = left;
    }

    return ans->next;
}

Node* mergeSort(Node* head)
{
    // Base Case
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    // Get the middle and split the list into left and right
    Node* mid = getMiddle(head);

    Node* left = head;
    Node* right = mid->next;

    mid->next = NULL;

    // Recursion to Sort and Merge
    left = mergeSort(left);
    right = mergeSort(right);

    head = merge(left, right);

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
    Node* n = new Node(0);
    Node* head = n;
    Node* tail = n;

    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);
    insertAtEnd(tail, 1);
    insertAtEnd(tail, 4);
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);
    insertAtEnd(tail, 1);
    insertAtEnd(tail, 4);

    cout << "List: " << endl;
    print(n);

    cout << "Sorted List: " << endl;
    n = mergeSort(n);
    print(n);

    return 0;
}