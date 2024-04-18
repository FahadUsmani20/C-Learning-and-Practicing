#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Fahad";
    m.insert({7, "X"});
    m[4] = "Huma";
    m[3] = "Pervez";
    m[2] = "Sahil";


    for(auto i: m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Find 7: " << m.count(7) << endl;
    cout << "Find 13: " << m.count(13) << endl;

    m.erase(7);
    for(auto i: m)
    {
        cout << i.first << " " << i.second << endl;
    }
    
    
    return 0;
}