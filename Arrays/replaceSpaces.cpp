#include<iostream>

using namespace std;

string removeOccurences(string str, string s)
{
    while(str.length() != 0 && str.find(s) < str.length())
    {
        str.erase(str.find(s), s.length());
    }

    return str;
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