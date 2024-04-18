#include<iostream>

using namespace std;

int main()
{   

    /*Patter to Print:
    1 2 3
    4 5 6
    7 8 9
    */

    int size, count = 1;
    cout << "Enter the size of pattern: ";
    cin >> size;

    //While Loop
    cout << "While Loop" << endl;
    int i = 1;
    while(i <= size)
    {
        int j = 1;
        while(j <= size)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    //For Loop
    cout << "For Loop" << endl;
    count = 1;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
    return 0;
}