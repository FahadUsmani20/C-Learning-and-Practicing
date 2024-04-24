#include<iostream>
#include<algorithm>

using namespace std;

// Note the array will be sorted

void get_pivot(int arr[], int size)
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

    cout << "Pivot of the Array is: " << start << endl;;
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

    get_pivot(arr, size);

    return 0;

}