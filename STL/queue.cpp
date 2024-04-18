#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Fahad");
    q.push("Sahil");
    q.push("Pervez");
    q.push("Huma");

    cout << "First: " << q.front() <<endl;
    q.pop();
    
    cout << "First: " << q.front() <<endl;

    cout << "Size: " << q.size()<<endl;
    
    cout << "Empty: "<<q.empty() <<endl;
    return 0;
}