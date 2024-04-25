#include<iostream>
#include<algorithm>

using namespace std;

void reverse_after_k(int arr[], int size, int k)
{
    int start = k, end = size-1;

    while(start <= end)
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

    int size, index;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);

    cout << "Given Array: ";
    print_Array(arr, size);

    cout << "Enter index: ";
    cin >> index;

    reverse_after_k(arr, size, index);

    cout << "Array After Reversing: ";
    print_Array(arr, size);

}