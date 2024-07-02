#include<iostream>

using namespace std;

void getEle(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printEle(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int* arr, int start, int end)
{
    // Create Pivot
    int pivot = arr[start], count = 0;

    // Count Number of elements smaller than pivot
    for(int i = start+1; i <= end; i++)
    {
        if(arr[i] < pivot)
        {
            count++;
        }
    }
    // Swap Pivot element with element at [start+count];
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Order elements such that smaller elements reside to the left of pivot and larger elements reside to the right of pivot
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot && i < pivotIndex)
        {
            i++;
        }
        
        while(arr[j] > pivot && j > pivotIndex)
        {
            j--;
        }

        swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int* arr, int start, int end)
{
    if(start >= end)
    {
        return;
    }

    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter Elements in the Array: ";
    getEle(arr, size);

    quickSort(arr, 0, size-1);

    cout << "Sorted Array: " << endl;
    printEle(arr, size);

    delete []arr;
    
    return 0;
}