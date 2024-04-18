#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Fahad");
    s.push("Sahil");
    s.push("Pervez");
    s.push("Huma");

    cout << "TOP: " << s.top() <<endl;
    s.pop();
    cout << "TOP: " << s.top() <<endl;

    cout << "Size: " << s.size()<<endl;
    
    cout << "Empty: "<<s.empty() <<endl;
    return 0;
}