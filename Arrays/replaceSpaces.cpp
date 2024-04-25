#include<iostream>

using namespace std;

void replaceSpace(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            cout<<"@40";
        }
        else
        {
            cout<<s[i];
        }
    }
}

int main()
{
    string s;

    cout << "Enter String: ";
    getline(cin, s);
    
    replaceSpace(s);
    return 0;
}