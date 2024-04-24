#include<iostream>
#include<algorithm>

using namespace std;

// Note the array will be sorted

int get_pivot(int arr[], int size)
{
    int start = 0, end = size - 1, mid;

    while(start < end)
    {
        mid = start + (end-start)/2;

        if(arr[mid] > arr[0])
        {
            start = mid+1;
        }

        else
        {
            end = mid;
        }
    }

    return start;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s, end = e;
    
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        
        if(arr[mid] == key)
        {
            cout << "Element Found at " << mid << endl; 
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid--;
        }
        else
        {
            start = mid++;
        }
    }
    cout << "Element not found!" << endl;
    return -1;
}

void take_input(int arr[], int size)
{
    cout << "Enter Element: ";
    for(int i = 0; i < size ; i++)
    {
        cin >> arr[i];  
    }
}

void print_Array(int arr[], int size)
{
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];

    int size, target;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);

    cout << "Given Array: ";
    print_Array(arr, size);

    cout << "Enter Target: ";
    cin >> target;

    int pi = get_pivot(arr, size);

    if (target >= arr[pi] && target < arr[size-1])
    {
        return binarySearch(arr, pi, size-1, target);
    }

    return binarySearch(arr, 0, pi-1, target);

}