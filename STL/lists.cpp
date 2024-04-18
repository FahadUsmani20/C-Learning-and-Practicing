#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;
    list<int> l1 (5, 100);

    for(int i: l1)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);

    for(int i: l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.pop_back();
    for(int i: l)
    {
        cout << i << " ";
    }
    cout << endl;
    
    l.pop_front();
    for(int i: l)
    {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "First Element: " <<l.front() << endl;
    cout << "Last Element: " <<l.back() << endl;
    
    cout << "Empty: " << l.empty() <<endl;
    
    /*
    */

    return 0;
}