#include<iostream>
#include<climits>

using namespace std;
/*
Maximum sum of subarrays
*/

int subarrays(int arr[], int n)
{
    //Time Complexity O(n^3)
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j<n; j++)
        {
            int sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int subarraysOptimized(int arr[], int n)
{

    //Time Complexity O(n^2)
    int curSum[n+1];
    curSum[0] = 0;
    for(int i = 1; i<= n; i++)
    {
        curSum[i] = curSum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;

    for(int i = 1; i <=n; i++)
    {
        int sum = 0;
        for(int j = 0; j < i; j++)
        {
            sum = curSum[i] - curSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    return maxSum;
}

int kadaneAlgo(int arr[], int n)
{
    //O(N)
    int sum = 0, mx = arr[0];

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(mx, sum);

        if(sum < 0)
        {
            sum = 0;
        }
    }

    return mx;
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

    cout <<"Maximum Sum: "<< subarrays(arr, size)<<endl;
    cout <<"Maximum Sum: "<< subarraysOptimized(arr, size)<<endl;
    cout <<"Maximum Sum: "<< kadaneAlgo(arr, size)<<endl;

}