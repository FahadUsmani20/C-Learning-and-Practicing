#include<iostream>
#include<algorithm>

using namespace std;

void mergeArrays(int arr1[], int arr2[], int size1, int size2)
{
    int arr3[size1+size2], ind = 0;
    int i = 0, j = 0;

    while(i < size1 && j < size2)
    {
        if(arr1[i] <= arr2[j])
        {
            arr3[ind++] = arr1[i++];
        }

        else
        {
            arr3[ind++] = arr2[j++];
        }
    }

    while(i < size1)
    {
        arr3[ind++] = arr1[i++];
    }
    
    while(j < size2)
    {
        arr3[ind++] = arr2[j++];
    }
    
    for(int i = 0; i < size1+size2; i++)
    {
        cout << arr3[i] << " ";
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
    int arr1[100];
    int arr2[100];

    int size1, size2;

    cout << "Enter size of array1: ";
    cin >> size1;
    
    take_input(arr1, size1);
    
    cout << "Enter size of array2: ";
    cin >> size2;
    
    take_input(arr2, size2);

    mergeArrays(arr1, arr2, size1, size2);
}