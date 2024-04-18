#include<iostream>
#include<climits>

using namespace std;
/*
Spiral Order Matrix Traversal
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

    int row_start = 0;
    int row_end = row-1;
    int col_start = 0;
    int col_end = col-1;

    while(row_start <= row_end && col_start < col_end)
    {
        //for starting row
        for(int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col]<< " ";
        }
        row_start++;
        
        //For Column End
        for(int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end]<<" ";
        }
        col_end--;

        //For bottom row
        for(int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        //For starting columns
        for(int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start]<< " ";
        }
        col_start++;
    }

}