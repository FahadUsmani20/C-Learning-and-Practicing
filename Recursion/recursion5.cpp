#include<iostream>

using namespace std;

//Remove All duplicated from the string

string dup(string text)
{
    if(text.length() == 0)
    {
        return "";
    }

    char ch = text[0];
    string ans = dup(text.substr(1));

    if(ch == ans[0])
    {
        return ans;
    }

    return ch + ans;
}


int main()
{
    cout << dup("aaaaabbbbbbcccccdddd");
    

    return 0;
}