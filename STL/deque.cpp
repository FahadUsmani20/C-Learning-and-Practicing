#include<bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(5);
    dq.emplace_front(6);

    dq.pop_back();
    dq.pop_front();

    for(auto it: dq)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    explainDeque();
    return 0;
}