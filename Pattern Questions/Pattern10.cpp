#include<iostream>

using namespace std;

int main()
{
    /*
    Pattern to Print:
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    */

    int size;
    cout << "Enter the Size: " << endl;
    cin >> size;

    //While Loop
    cout << "Using While Loop" << endl;
    int i = 0; 
    while (i < size)
    {
        int j = 0, k = 0;

        while(j < size - i)
        {
            cout << j + 1 << " ";
            j++;
        }
        
        while(k < i)
        {
            cout << "* * ";
            k++;
        }
        
        while(j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    //For Loop
    cout << "Using For Loop" << endl;
    for(int i = 0; i < size; i++)
    {
        
        for(int j = 0; j < size - i; j++)
        {
            cout << j+1 << " ";
        }
        for(int k = 0; k < i; k++)
        {
            cout << "* * ";
        }
        for(int j = size - i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    

    
    return 0;
}