/*
    349. Intersection of two arrays
    Given two integer arrays nums1 and nums2, return an array of their intersection. 

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& num1, vector<int>& num2) {
    vector<int> res;
    int i =0, j = 0;
    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());
    while(i < num1.size() && j < num2.size())
    {
        if(num1[i] == num2[j])
        {
            res.push_back(num1[i]);
            i++;j++;
        }
        else if(num1[i] < num2[j])
        {
            i++;
        }
        else
        {
            j++;
        }

    }
    return res;
}

int main()
{
    vector<int>arr1 = {3,2,5,6,6};
    vector<int>arr2 = {3,6};
    vector<int>res = intersection(arr1, arr2);

    for(int i =0; i< res.size(); i++)
    {
        cout << res[i] << endl;
    }


    return 0;
}
