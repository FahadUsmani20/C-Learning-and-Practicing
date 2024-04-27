#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // Dynamically increases size of vector;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    vector<pair<int, int>> vec;
    vec.push_back({3,4});
    vec.emplace_back(5,6);
    
    for(int i = 0; i < v.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    vector<int>a(5, 100); // Will declare 5 instances of values which are 100;
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // vector<int> a(5); // Will declare 5 instances of values that store a garbage values

    // Accessing Elements in a vector:

    /*
    vector<int> :: iterator it = a.begin(); Points to the starting address of vector a 
    it++;

    cout << *(it) << " ";
    */

    // Method 1: to initialize iterators
    for(vector<int> :: iterator it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    
    // Method 2: to initialize iterators
    for(auto it = a.begin(); it != a.end(); it++) // auto: automatically initializes the data type
    {
        cout << *it << " ";
    }
    cout << endl;
    
    // Method 3: to initialize iterators
    for(auto it : a) // auto: automatically initializes the data type
    {
        cout << it << " ";
    }
    cout << endl;

    a.erase(a.begin()); // Give Address to remove
    for(auto it : a) // auto: automatically initializes the data type
    {
        cout << it << " ";
    }
    cout << endl;

    a.erase(a.begin(), a.end()- 2);
    for(auto it : a) // auto: automatically initializes the data type
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    explainVector();
    return 0;
}