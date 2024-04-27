#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue()
{
    // Element are aranged in descending order of value
    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.emplace(6);

    cout << pq.top() <<endl;
    
    pq.pop();
    
    cout << pq.top() <<endl;
}

int main()
{
    explainPriorityQueue();
    return 0;
}