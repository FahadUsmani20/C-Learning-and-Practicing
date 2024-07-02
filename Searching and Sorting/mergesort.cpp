#include<iostream>

using namespace std;

void getEle(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printEle(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int* arr, int start, int end)
{
    int mid = start + (end-start)/2;
    int len1 = mid - start +1;
    int len2 = end - mid;

    //Creation of arrays
    int* array1 = new int[len1];
    int* array2 = new int[len2];

    int mainInd = start;

    //Copying Arrays
    for(int i= 0; i < len1; i++)
    {
        array1[i] = arr[mainInd++];
    }
    
    for(int i= 0; i < len2; i++)
    {
        array2[i] = arr[mainInd++];
    }

    mainInd = start;

    // Merging The Sorted Arrays
    int index1 = 0, index2 = 0;

    while(index1 < len1 && index2 < len2)
    {
        if(array1[index1] < array2[index2])
        {
            arr[mainInd++] = array1[index1++];
        }
        else
        {
            arr[mainInd++] = array2[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mainInd++] = array1[index1++];
    }

    while(index2 < len2)
    {
        arr[mainInd++] = array2[index2++];
    }

    delete []array1;
    delete []array2;
}

void mergeSort(int* arr, int start, int end)
{
    if(start >= end)
    {
        return;
    }

    int mid = start + (end-start)/2;
    // Left Half Sorting
    mergeSort(arr, start, mid);

    // Right Half Sorting
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
}

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter Elements in the Array: ";
    getEle(arr, size);

    mergeSort(arr, 0, size-1);

    cout << "Sorted Array: " << endl;
    printEle(arr, size);

    delete []arr;
    
    return 0;
}