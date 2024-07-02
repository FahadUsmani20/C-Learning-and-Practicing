#include<iostream>
#include<math.h>

using namespace std;

void insertion_sort(int arr[], int size)
{
    for(int i  =1; i < size; i++)
    {
        int current = arr[i];

        int j = i-1;

        while(arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    } 
}

int main()
{

    int size;
    cout << "Size: ";
    cin >> size;

    int arr[size];
    cout << "Elements: ";
    
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted Array" << endl;
    
    insertion_sort(arr, size);
    
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

