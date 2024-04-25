#include<iostream>
#include<algorithm>

using namespace std;

bool rotateArray_Sorted(int arr[], int size)
{
    int count= 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        }
    }

    if(arr[size-1] > arr[0])
    {
        count++;
    }

    return (count <= 1);
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

    int size, k;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);

    if(rotateArray_Sorted(arr, size))
    {
        cout << "Array is Rotated and Sorted" <<endl;
        return 0;
    }

    cout << "Array is not Sorted" <<endl;
    return 0;
}