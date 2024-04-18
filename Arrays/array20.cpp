/*
287. Find Duplicate Number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
442. Find All Duplicates in an Array

    Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
    You must write an algorithm that runs in O(n) time and uses only constant extra space.
*/
vector<int> findDuplicates(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int>res;
    for(int i = 1; i< nums.size(); i++)
    {
        if(nums[i] == nums[i-1])
        {
            res.push_back(nums[i]);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {1,2,2,1,3};

    vector<int> res =  findDuplicates(arr);
    for(int i = 0; i <res.size(); i++)
    {
        cout << res[i] <<endl;
    }
}