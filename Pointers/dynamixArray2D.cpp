#include<iostream>

using namespace std;

int main()
{
    //Variable Size Array
    int n, m;
    cout << "Size: ";
    cin >> n;

    int **arr = new int *[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = new int [n]; // we can use *(arr + i)
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "2D- Array" <<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing Memory
    for(int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}