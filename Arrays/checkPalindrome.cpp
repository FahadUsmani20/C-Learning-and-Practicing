#include<iostream>

using namespace std;

int get_length(char arr[])
{
    int count = 0;
    
    while(arr[count] != '\0')
    {
        count++;
    }

    return count;
}

bool checkPalindrome(char arr[], int length)
{
    int start = 0, end = length-1;

    while(start < end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;end--;
    }

    return true;
}

int main()
{
    char names[10];

    cout << "Enter Name: ";
    cin >> names;
    int length = get_length(names);
    
    if(checkPalindrome(names, length))
    {
        cout << "The String is a Palindrome";
        return 0;
    }
    
    cout << "The String is not a Palindrome";
    return 0;
}