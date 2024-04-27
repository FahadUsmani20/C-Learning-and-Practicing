#include<bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    cout << q.front() <<endl;
    cout << q.back() <<endl;
    q.pop();
    cout << q.front() <<endl;
    cout << q.size() <<endl;
    cout << q.empty() <<endl; // Returns True or False
}

int main()
{
    explainQueue();
    return 0;
}