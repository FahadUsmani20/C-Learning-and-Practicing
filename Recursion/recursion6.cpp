#include<iostream>

using namespace std;

//Move all x to the end of the string

string movex(string text)
{
    if(text.length() == 0)
    {
        return "";
    }

    if(text[0] == 'x')
    {
        return movex(text.substr(1))+'x';
    }

    return text[0] + movex(text.substr(1));

}


int main()
{
    cout << movex("axxabxxbcxxcdxxd");
    

    return 0;
}