#include<iostream>
#include<climits>

using namespace std;
// Give the maximum element till ith index for the entire array
void max_i(int arr[], int n)
{
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
        cout << maxi << " ";
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

    max_i(arr, size);
    

    return 0;
}