#include<iostream>
#include<climits>

using namespace std;
/*
Maximum Circular Subarray Sum
*/

int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxsum = max(maxsum, currsum);

        if(currsum < 0)
        {
            currsum = 0;
        }
    }

    return maxsum;
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

    int wrapsum, nonwrapsum = kadane(arr,size), totalsum = 0;

    for(int i = 0; i < size; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, size);

    cout <<"Maximum Sum: "<< max(wrapsum, nonwrapsum)<<endl;

}