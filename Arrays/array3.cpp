#include<iostream>
#include<climits>

using namespace std;
/*
Longest Arithmetic Subarray
 Given an array arr[] of size, N, the task is to find the length of the longest subarray that has common difference equal.
*/
int arr_sub(int arr[], int n)
{
    //Time Complexity - O(N^2)
    int length = 0, track, diff;
    for(int i = 1; i < n; i++)
    {
        track = 2;
        diff = arr[i] - arr[i-1];

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] - arr[j-1] == diff)
            {
                track++;
            }
            else
            {
                break;
            }
        }
        length = max(length, track);
    }
    return length;
}

int arr_sub_optimized(int arr[], int n)
{
    //Time Complexity - O(N)
    int length = 2, track = 2, diff = arr[1] - arr[0], j = 2;

    while(j < n)
    {
        if (arr[j] - arr[j-1] == diff)
        {
            track++;
        }
        else
        {
            diff = arr[j] - arr[j-1];
            length = max(length, track);
            track = 2;
        }
        j++;
    }
    return length;
    
}


int main()
{
    int size;
    cout <<  "Enter Size: " << endl;
    cin >> size;
    int arr[size];

    cout <<  "Enter Elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int l = arr_sub(arr, size);
    cout <<"Length of longest contigous subarray: " << l <<endl;
    
    int x = arr_sub_optimized(arr, size);
    cout <<"Length of longest contigous subarray: " << x <<endl;
    

    return 0;
}