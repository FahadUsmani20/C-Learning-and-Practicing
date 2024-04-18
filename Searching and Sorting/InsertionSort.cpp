#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;

        while(arr[j] > current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main()
{
    int n;
    cout << "Enter Size: " <<endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    insertionSort(arr, n);

    cout << "After Sorting:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}