#include<iostream>
#include<algorithm>

using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++; end--;
    }
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

    int size;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);

    cout << "Given Array: ";
    print_Array(arr, size);

    reverseArray(arr, 6);

    cout << "Updated Array: ";
    print_Array(arr, size);
}