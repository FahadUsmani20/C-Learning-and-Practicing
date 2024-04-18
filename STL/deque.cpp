#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    for(int i: d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for(int i: d)
    {
        cout << i << " ";
    }
    cout << endl;
    
    d.pop_front();
    for(int i: d)
    {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Element as index 1: " << d.at(1) <<endl;
    
    cout << "First Element: " <<d.front() << endl;
    cout << "Last Element: " <<d.back() << endl;
    
    cout << "Empty: " << d.empty() <<endl;

    return 0;
}