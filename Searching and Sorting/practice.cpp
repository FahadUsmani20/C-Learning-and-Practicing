#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int j = i-1, current = arr[i];

        while(arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {4,3,5,1,2,7,6,8};
    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, 8);

    return 0;
}