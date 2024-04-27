#include<iostream>

using namespace std;

//Bubble Sort

void bubbleSort(int arr[], int n)
{
    if(n == 0 || n == 1)
    {
        return;
    }

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubbleSort(arr, n-1);
}



int main()
{
    int arr[] = {1,5,3,7,4,9,2};
    cout << "Before Sorting: "<<endl;

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;
    
    cout << "After Sorting: "<<endl;
    bubbleSort(arr, 7);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;

    return 0;
}