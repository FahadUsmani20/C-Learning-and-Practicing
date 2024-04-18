#include<iostream>

using namespace std;

int main()
{   

    /*Patter to Print:
    - - - *
    - - * *
    - * * *
    * * * *
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
        while (j <= size - i)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while(j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
   

    //For Loop
    cout << "For Loop" << endl;
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size - i; j++)
        {
            cout << " "; 
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    /*Patter to Print:
    * * * *
    - * * *
    - - * *
    - - - *
    */

    //Reverse While Loop
    cout << "Reverse While Loop" << endl;
    int x = 0;

    while(x <= size)
    {
        int y = 0;
        while(y < x)
        {
            cout << " ";
            y++;
        }
        y = 0;
        while(y < size - x)
        {
            cout << "*";
            y++;
        }
        cout << endl;
        x++;
    }

    //Reverse For Loop
    cout << "Reverse For Loop" << endl;
    for(int x = 0; x < size;x++)
    {
        for(int y = 0; y< x; y++)
        {
            cout << " ";
        }
        for(int y = 0; y < size -x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}