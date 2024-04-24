#include<iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
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
    
    selectionSort(arr, n);

    cout << "After Sorting:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}