#include<iostream>

using namespace std;

int main()
{   

    /*Patter to Print:
    1
    2 2
    3 3 3
    4 4 4 4
    */

    int size;
    cout << "Enter the size of pattern: ";
    cin >> size;

    //While Loop
    cout << "While Loop" << endl;
    int i = 1;
    while(i <= size)
    {
        int j = 1;
        while(j <= i)
        {
            cout << i <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
   

    //For Loop
    cout << "For Loop" << endl;
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*Patter to Print:
    4 4 4 4
    3 3 3
    2 2
    1
    */

    //While Looy
    cout << "Reverse While Loop" << endl;
    int x = size;
    while(x >= 1)
    {
        int y = 1;
        while(y <= x)
        {
            cout << x <<" ";
            y++;
        }
        cout << endl;
        x--;
    }
   

    //For Loop
    cout << "Reverse For Loop" << endl;
    for(int x = size; x >= 1; x--)
    {
        for(int y = 1; y <= x; y++)
        {
            cout << x <<" ";
        }
        cout << endl;
    }
    
    
    return 0;
}