#include<iostream>

using namespace std;

int main()
{   

    /*Patter to Print:
    1
    2 1
    3 2 1
    4 3 2 1
    */

    int size;
    cout << "Enter the size of pattern: ";
    cin >> size;

    //While Loop
    cout << "While Loop" << endl;
    int i = 1;
    while(i <= size)
    {
        int j = 0;
        while(j < i)
        {
            cout << i - j <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
   

    //For Loop
    cout << "For Loop" << endl;
    for(int i = 1; i <= size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << i - j << " ";
        }
        cout << endl;
    }

    /*Patter to Print:
    4 5 6 7
    3 2 1
    2 1
    1
    */

    //While Loop
    cout << "Reverse While Loop" << endl;
    int x = size;
    while(x >= 1)
    {
        int y = 0, count = x;
        while(y < x)
        {
            cout << x-y <<" ";
            y++;
        }
        cout << endl;
        x--;
    }
   

    //For Loop
    cout << "Reverse For Loop" << endl;
    for(int x = size; x >= 1; x--)
    {
        int count = x;
        for(int y = 0; y < x; y++)
        {
            cout << x-y <<" ";
        }
        cout << endl;
    }
    
    
    return 0;
}