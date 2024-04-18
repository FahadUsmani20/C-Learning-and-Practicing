/*
1207. Unique Number of Occurrences
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) 
{
    vector<int> res; // Vector to store count
    sort(arr.begin(), arr.end());//sort the array

    //initialize count to 1 increment count when the previous element is equal to current element. Else push the count to result and set count to 1
    int count = 1;
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] == arr[i-1])
        {
            count++;
        }
        else
        {
            res.push_back(count);
            count = 1;
        }
    }
    res.push_back(count);

    sort(res.begin(), res.end());
    
    for(int i =1; i < res.size(); i++)
    {
        if(res[i] == res[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1,2,2,1,3};

    cout << uniqueOccurrences(arr);
}