#include<iostream>
#include<algorithm>

using namespace std;

void swapAlternateElements(int arr[], int size)
{
    int start = 0;

    while(start < size-1)
    {
        swap(arr[start], arr[start+1]);
        start += 2;
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

    swapAlternateElements(arr, size);

    cout << "Updated Array: ";
    print_Array(arr, size);
}