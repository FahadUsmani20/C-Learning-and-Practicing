#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
Pair Sum
GIven an array of size 'N' and integer 'S'. Return a list of all pairs of elements such that each sum of elements of each pair is 'S'.
*/

vector<vector<int>> twoSum(vector<int>& nums, int target) {
    vector<vector<int>> res;

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size(); i++)
    {
        int value = target - nums[i], start = i, end = nums.size();

        while(start <= end)
        {
            int mid = (start + end) / 2;

            if(nums[mid] == value)
            {
                vector<int>temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[mid]);
                res.push_back(temp);
            }
            if(value > nums[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }  
    }
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    int target = 5;
    vector<int> arr ={1,2,3,4};
    vector<vector<int>> res =twoSum(arr, target);

    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
    
}
