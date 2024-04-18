#include<iostream>

using namespace std;

//Merge Sort

void merge(int arr[], int start, int mid, int end)
{
    int n = mid - start + 1;
    int m = end - mid;
    
    int a[n];
    int b[m];

    for(int i = 0; i < n; i++)
    {
        a[i] = arr[start+i];
    }
    for(int i = 0; i < m; i++)
    {
        b[i] = arr[mid+1+i];
    }

    int i = 0, j = 0;
    int k = start;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++; i++;
        }
        else
        {
            arr[k] = b[j];
            k++; j++;
        }
    }

    while(i < n)
    {
            arr[k] = a[i];
            k++; i++;
    }
    
    while(j < m)
    {
            arr[k] = b[j];
            k++; j++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if(start < end)
    {   
        int mid = start + (end - start)/2;
        
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, start, mid, end);  
    }
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
    mergeSort(arr,0, 7);

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;

    return 0;
}