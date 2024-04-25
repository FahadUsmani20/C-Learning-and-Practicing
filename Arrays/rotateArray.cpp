#include<iostream>
#include<algorithm>

using namespace std;

void rotateArray(int arr[],int temp[], int size, int k)
{
    for(int i = 0; i < size; i++)
    {
        temp[(i+k)%size] = arr[i];
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

    int size, k;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);
    
    cout << "Enter Rotations: ";
    cin >> k;

    int temp[size];
    rotateArray(arr, temp, size, k);

    cout << "Updated Array: ";
    print_Array(temp, size);

    return 0;
}