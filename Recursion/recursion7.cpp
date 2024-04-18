#include<iostream>

using namespace std;

//Generate all substring of a string

void sub_strings(string text, string ans)
{
    if(text.length() == 0)
    {
        cout << ans <<endl;
        return;
    }
    sub_strings(text.substr(1), ans);
    sub_strings(text.substr(1), ans+text[0]);
}


int main()
{
    sub_strings("ABC","");
    cout << endl;

    return 0;
}