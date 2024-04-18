#include<iostream>

using namespace std;

int main()
{   

    /*Patter to Print:
    * * * *
    * * *
    * *
    * 
    */

    int size;
    cout << "Enter the size of pattern: ";
    cin >> size;

    //While Loop
    cout << "While Loop" << endl;
    int i = 0;
    while(i < size)
    {
        int j = 1;
        while (j <= size - i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
   

    //For Loop
    cout << "For Loop" << endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j <= size - i; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
    

    /*Patter to Print:
    * 
    * * 
    * * *
    * * * *
    */

    //Reverse While Loop
    cout << "Reverse While Loop" << endl;
    int x = 1;

    while(x <= size)
    {
        int y = 0;
        while(y < x)
        {
            cout << "*";
            y++;
        }
        cout << endl;
        x++;
    }

    //Reverse For Loop
    cout << "Reverse For Loop" << endl;
    for(int x = 1; x <= size; x++)
    {
        for(int y = 1; y <= x; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}