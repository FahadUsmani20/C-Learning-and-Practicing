#include<iostream>
#include<climits>

using namespace std;
/*
First Repeating element
Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.
Note:- The position you return should be according to 1-based indexing. 
*/

int repeating_ele(int arr[], int n)
{
    const int N = INT_MAX;
    int idx[N];
    for(int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minI = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(idx[arr[i]] != -1)
        {
            minI = min(minI, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if(minI == INT_MAX)
    {
        return -1;
    }
    
    return minI;
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
    
    int x = repeating_ele(arr, size);
    cout <<"Index: " << x <<endl;

    return 0;
}