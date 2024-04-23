#include<iostream>
#include<algorithm>

using namespace std;

// Note the Arrays will be sorted in Increasing Order

void findIntersection(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0, j = 0, count = 0, intersection[100];

    while(i < size1 && j < size2)
    {
        if(arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
        }
        else
        {
            intersection[count] = arr1[i];
            count++; i++; j++;
        }
    }

    cout << "Intersection Elements are: ";
    for(int i = 0; i < count; i++)
    {
        cout << intersection[i] << " ";
    }
    return;
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
    int arr1[100], arr2[100];

    int size1, size2;

    cout << "Enter size of array 1: ";
    cin >> size1;
    
    take_input(arr1, size1);
    
    cout << "Enter size of array 2: ";
    cin >> size2;
    
    take_input(arr2, size2);

    findIntersection(arr1, arr2, size1, size2);

    return 0;
}