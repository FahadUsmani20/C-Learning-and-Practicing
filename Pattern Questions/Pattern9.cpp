#include<iostream>

using namespace std;

int main()
{
    /*
    Pattern to Print:
    - - - 1
    - - 1 2 1
    - 1 2 3 2 1
    1 2 3 4 3 2 1*/

    int size;
    cout << "Enter the Size: " << endl;
    cin >> size;

    //While Loop
    cout << "Using While Loop" << endl;
    int i = 1; 
    while (i <= size)
    {
        int j = 1;
        while(j <= size - i)
        {
            cout << "  ";
            j++;
        }
        j = 0;
        while (j < i)
        {
            j++;
            cout << j << " ";
        }

        while(j > 1)
        {
            j--;
            cout << j << " ";
        }
        cout << endl;
        i++;
    }

    //For Loop
    cout << "Using For Loop" << endl;
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size -i; j++)
        {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for(int j = i-1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    
    return 0;
}