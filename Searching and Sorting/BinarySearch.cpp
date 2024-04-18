#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    
    while (start <= end)
    {
        int mid = (start + end)/2;
        
        if(arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid--;
        }
        else
        {
            start = mid++;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter Size: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter Elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key: " << endl;
    cin >> key;
    
    cout << "Index: " << binarySearch(arr, n, key);
    

    return 0;
}