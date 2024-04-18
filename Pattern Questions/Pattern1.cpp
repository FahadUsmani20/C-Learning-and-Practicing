#include<iostream>

using namespace std;

int main()
{
    /* Pattern to Print:
    1 2 3 4
    1 2 3 4
    1 2 3 4*/ 

    int size;
    cout << "Enter size of Pattern: ";
    cin >> size;

    //Using While Loop
    int i = 0;
    cout << "While loop" << endl;
    while(i <= size)
    {
        int j = 1;
        while(j <= size)
        {
            cout << j << " ";
            j++;
        }
        cout<<endl;
        i++;
    }

    //Using For Loop
    cout << "For loop" << endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j <= size; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /* Pattern to Print:
    4 3 2 1
    4 3 2 1
    4 3 2 1*/ 

    //Using While Looy
    int x;
    cout << "While loop" << endl;
    while(x <= size)
    {
        int y = size;
        while(y > 0)
        {
            cout << y << " ";
            y--;
        }
        cout<<endl;
        x++;
    }

    //Using For Loop
    cout << "For loop" << endl;
    for(int x = 0; x < size; x++)
    {
        for(int y = size; y >= 1; y--)
        {
            cout << y << " ";
        }
        cout << endl;
    }

}