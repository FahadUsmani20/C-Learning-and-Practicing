#include<iostream>
using namespace std;

/*
Leetcode 136
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

int Xor(int* , int);

int main()
{
    int arr[] = {2,4,2,4,1};
    int ans = Xor(arr, 5);

    cout << ans;
    
    return 0;
}

int Xor(int* arr, int size)
{
    int ans = 0;

    for(int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    return ans;
}

