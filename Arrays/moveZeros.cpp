#include<iostream>
#include<algorithm>

using namespace std;

void moveZeros(int arr[], int size)
{
    int i = 0;
    for(int j = 0; j < size;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
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

    moveZeros(arr,size);

    cout << "Updated Array: ";
    print_Array(arr, size);

    return 0;
}