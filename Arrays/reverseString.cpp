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

void reverseString(char arr[], int length)
{
    int start = 0, end = length-1;

    while(start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    char names[10];

    cout << "Enter Name: ";
    cin >> names;
    int length = get_length(names);
    reverseString(names, length);
    cout << "Reverse: " << names;
    

    return 0;
}