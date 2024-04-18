#include<iostream>
#include<climits>

using namespace std;
/*
Transpose Matrix Traversal
*/

int main()
{
    int row, col;
    cout <<  "Enter Value of Row and Columns: " << endl;
    cin >> row >> col;
    int arr[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

   

}