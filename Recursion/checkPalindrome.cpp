#include<iostream>

using namespace std;

bool checkPalindrome(char n[],int start, int end)
{
    if(start > end)
    {
        return true;
    }

    if (n[start] != n[end])
    {
        return false;
    }

    return checkPalindrome(n, start+1, end-1);
}

int main()
{
    char c[100];
    int n;
    
    cout<< "Size: ";
    cin >> n;
    
    cout<< "Enter String: ";
    cin >> c;

    if(checkPalindrome(c, 0, n-1))
    {
        cout << "String is a Palindrome!";
        return 0;
    }

    cout << "String is not a Palindrome";
    return 0;
}