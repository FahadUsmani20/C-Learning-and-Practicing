#include<iostream>
#include<climits>

using namespace std;
/*
Record Breaker
Isyana is given the number of visitors at her local theme park on N consecutive days.
 
The number of visitors on the i-th day is VI. A day is record-breaking if it satisfies both of the following conditions:

The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record-breaking day. Please help Isyana find out the number of record-breaking days.
*/

int record_breaker(int arr[], int n)
{
    //Time Complexity - O(N^2)
    int ndays = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if((max(arr[i], arr[j]) == arr[i]) && ((i == n-1) || (arr[i] > arr[i+1])))
            {
                ndays++;  
            }
            else if(i == 1)
            {
                ndays++;
            }
            break;
        }
    }
    return ndays;
}

int record_breaker_optimized(int arr[], int n)
{
    //Time Complexity - O(N)
    if(n == 1)
    {
        return 1;
    }

    int ndays = 0, mx = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > mx && ((i == n-1) || (arr[i] > arr[i+1])))
        {
            mx = arr[i];
            ndays++;  
        }
        else if(i == 1)
        {
            ndays++;
        }
    }
    return ndays;
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

    int l = record_breaker(arr, size);
    cout <<"Record Breaking Days: " << l <<endl;
    
    int x = record_breaker(arr, size);
    cout <<"Record Breaking Days Optimized: " << x <<endl;

    return 0;
}