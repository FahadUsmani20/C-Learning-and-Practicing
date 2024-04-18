#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);

    for(auto i: s)
    {
        cout << i <<endl;
    }
    cout << endl;

    set<int>:: iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i: s)
    {
        cout << i <<endl;
    }
    cout << endl;

    cout <<"Is 5 present: "<<s.count(5) <<endl;
    cout <<"Is -5 present: "<<s.count(-5) <<endl;
    
    set<int>:: iterator itr = s.find(5);
    cout << "Value present at 5: "<< *itr << endl;
    
    return 0;
}