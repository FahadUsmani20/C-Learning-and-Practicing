#include<iostream>

using namespace std;

//Replace pi with 3.14
void pi(string text)
{
    if(text.length() == 0)
    {
        return;
    }
    
    if(text[0] == 'p' && text[1] == 'i')
    {
        cout << "3.14";
        pi(text.substr(2));
    }   
    else
    {
        cout << text[0];
        pi(text.substr(1));
    }
    
}

//Reverse String

void reverse(string text)
{
    if(text.length() == 0)
    {
        return;
    }

    reverse(text.substr(1));
    cout << text[0];
}

int main()
{
    reverse("binod");
    cout << endl;
    pi("pppippxxxpxxxpxxxpiipxxxpi");

    return 0;
}