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
int main()
{
    char names[10];

    cout << "Enter Name: ";
    cin >> names;

    cout << "Length: " << get_length(names);

    return 0;
}