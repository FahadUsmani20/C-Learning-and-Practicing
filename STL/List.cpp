#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainList()
{
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(5);
    ls.emplace_front(6);

    for(auto it: ls)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    explainList();
    return 0;
}