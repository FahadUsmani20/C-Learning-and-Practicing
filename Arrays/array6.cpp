#include<iostream>
#include<climits>

using namespace std;
/*
Subarray with Given sum
Given an unsorted array A of size N that contains only non negative integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.
*/

int sub_sum(int arr[], int n, int s)
{
    int i = 0, j = 0, st = -1, ed = -1, curr_sum = 0;

    while(j < n && curr_sum + arr[j] <= s)
    {
        curr_sum += arr[j];
        j++;
    }

    if(curr_sum == s)
    {
        cout << i+1 << " " << j << endl;
        return 0;
    }

    while(j < n)
    {
        curr_sum += arr[j];

        while(curr_sum > s)
        {
            curr_sum -= arr[i];
            i++;
        }
        if(curr_sum == s)
        {
            st = i+1;
            ed = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << ed << endl;
    return 0;
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

    int s;
    cout << "Enter Value: " <<endl;
    cin >> s;
    sub_sum(arr, size, s);

}