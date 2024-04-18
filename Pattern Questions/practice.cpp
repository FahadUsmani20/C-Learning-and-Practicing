#include<iostream>

using namespace std;

int main()
{   
    int n;
    cout << "Size: " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*n; j++)
        {
            if(j <= i || j > (2*n) - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= 2*n; j++)
        {
            if(j <= n-i || j > n + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}