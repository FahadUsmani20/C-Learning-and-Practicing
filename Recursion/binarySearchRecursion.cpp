#include<iostream>

using namespace std;

//Binary Search
bool binary_search(int arr[],int key, int start, int end)
{

    if(start > end)
    {
        return false;
    }

    int mid = start + (end-start)/2;

    if(arr[mid] == key)
    {
        return true;
    }
    
    if(arr[mid] < key)
    {
        binary_search(arr, key, mid+1, end);
    }

    else
    {
        binary_search(arr, key, start, mid-1);
    }

}


int main()
{
    int arr[] = {1,2,3,4,5,6,7};

    if(binary_search(arr, 12, 0, 7))
    {
        cout << "Element found!" <<endl;
    }
    else
    {
        cout << "Element not found!" <<endl;
    } 

    return 0;
}