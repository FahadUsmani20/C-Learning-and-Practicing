#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int arr[n];

    cout << "Enter Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = INT_MIN, rec= 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1] && arr[i] > mx)
        {
            rec++;
        }
        mx = max(mx, arr[i]);
    }

    cout << "Record Breaking Days: " << rec;

    return 0;
}