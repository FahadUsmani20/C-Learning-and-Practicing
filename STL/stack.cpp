#include<bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout << st.top() <<endl;
    cout << st.size() <<endl;
    cout << st.empty() <<endl; // Returns True or False
}

int main()
{
    explainStack();
    return 0;
}