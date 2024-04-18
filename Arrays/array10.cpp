#include<iostream>
#include<climits>

using namespace std;
/*
Pair Sum
*/

bool pairsum(int arr[], int n, int k)
{
    int low = 0, high = n-1;

    while(low < high)
    {
        if(arr[low] + arr[high] == k)
        {
            cout << arr[low] <<", " <<arr[high]<<endl;;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
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

    int ele;
    cout << "Enter Sum: " <<endl;
    cin >>ele;

    cout <<pairsum(arr,size, ele)<<endl;

}