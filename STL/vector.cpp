#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    vector<int> a(5,1);
    cout << "Vector a:" << endl;
    for(int i: a)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "Empty: " << v.capacity() <<endl;
    
    v.push_back(1);
    cout << "Capacity: " << v.capacity() <<endl;
    
    v.push_back(2);
    cout << "Capacity: " << v.capacity() <<endl;
    
    v.push_back(3);
    cout << "Capacity: " << v.capacity() <<endl;
    
    v.push_back(4);
    cout << "Capacity: " << v.capacity() <<endl;
    
    cout << "Size: " << v.size() <<endl;

    cout << "Element as index 2: " << v.at(2) <<endl;
    
    cout << "First Element: " <<v.front() << endl;
    cout << "Last Element: " <<v.back() << endl;

    cout << "Before POP function" <<endl;
    for(int i: v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After POP function" <<endl;
    v.pop_back();
    for(int i: v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear();
    /*
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Empty: " << a.empty() <<endl;

    */

    return 0;
}