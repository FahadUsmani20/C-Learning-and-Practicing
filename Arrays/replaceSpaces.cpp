#include<iostream>

using namespace std;

bool removeOccurences(string str, string s)
{
    if(str.find(s))
    {
        return true;
    }

    return false;
}

int main()
{
    string s, part;

    cout << "Enter String: ";
    getline(cin, s);
    
    cout << "Enter Part: ";
    getline(cin, part);
    
    s = removeOccurences(s, part);
    cout << "New String: " << s;
    return 0;
}