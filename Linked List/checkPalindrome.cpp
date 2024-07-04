#include<iostream>
#include<map>
#include<vector>
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

/*
Check if the linked List is a Palindrome

Approach 1: TIme Complexity - O(N)
*/ 
bool check(vector<int> arr)
{
    int s = 0, e = arr.size()-1;

    while(s < e)
    {
        if (arr[s++] != arr[e--]) return 0;
    }
    return 1;
}

bool checkPalindrome(Node* head)
{
    vector<int>arr;
    
    Node* temp = head;

    while(temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return check(arr);
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
    Node* n = new Node(1);
    Node* head = n;
    Node* tail = n;
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 1);
    insertAtEnd(tail, 0);

    cout << "List: " << endl;
    print(n);

    if(checkPalindrome(n))
    {
        cout << "Linked List is a Palindrome.";
    }
    else
    {
        cout << "Linked List is not a Palindrome.";
    }
    

    return 0;
}