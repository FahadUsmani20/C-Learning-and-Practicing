#include<iostream>
#include<climits>

using namespace std;

// Given an array. Output sum of each subarray of the given array
void sub_sum(int arr[], int n)
{

    for(int i = 0; i < n; i++)
    {
        int current = 0;
        for(int j = i; j < n ; j++)
        {
            current += arr[j];
            cout << current <<endl;
        }
    }
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

    sub_sum(arr, size);
    

    return 0;
}