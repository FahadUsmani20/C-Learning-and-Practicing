#include<iostream>
#include<algorithm>

using namespace std;

//Quick Sort

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];

    int i = start - 1;
    for(int j = start; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i+1, end);

    return i+1;
}

void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pi = partition(arr, start, end);

        quickSort(arr, start, pi-1);
        quickSort(arr, pi+1, end);
    }
}


int main()
{
    int arr[] = {1,5,3,7,4,9,2};

    cout << "Before Sorting: "<<endl;

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;
    
    cout << "After Sorting: "<<endl;
    quickSort(arr,0, 6);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;

    return 0;
}