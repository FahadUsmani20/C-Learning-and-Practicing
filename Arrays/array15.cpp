//Reversing an Array

#include<iostream>

using namespace std;

void swap(int arr[], int size)
{
    int start = 0, end = size-1;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
void print_array(int arr[], int size)
{
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    print_array(arr, 5);
    swap(arr, 5);
    print_array(arr, 5);
    
    return 0;
}