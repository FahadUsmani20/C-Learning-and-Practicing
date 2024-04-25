#include<iostream>

using namespace std;

bool valid(char ch) // Function To check if character is valid
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }

    return false;
}

char isLower(char s) // Convert characters to lower case
{
    if(s >= 'A' && s <= 'Z')
    {
        return s - 'A' + 'a';
    }
    return s;
}

bool isPalindrome(string s) {
    string res;

    for(int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            res.push_back(isLower(s[i]));
        }
    }

    int start = 0, end = res.length()-1;

    while(start < end)
    {
        if (res[start++] != res[end--])
        {
            return false;
        }
    }
    return true;
    
}


int main()
{
    char s[100];

    cout << "Enter String: ";
    cin >> s;
    
    /*
        Test Strings:
        A man, a plan, a canal: Panama  
        race a car
        " "
    */ 
    if(isPalindrome(s))
    {
        cout << "The String is a Palindrome";
        return 0;
    }
    
    cout << "The String is not a Palindrome";
    return 0;
}