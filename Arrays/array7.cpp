#include<iostream>
#include<climits>

using namespace std;
/*
Smallest Positive Missing Number
*/

const int N = 1e6 + 2 ;

int small_pos(int arr[], int n)
{
    bool ind[N];

    for(int i = 0 ; i < N; i++)
    {
        ind[i] = 0;
    }

    for(int i = 0; i < N; i++)
    {
        if(arr[i] > 0)
        {
            ind[arr[i]] = 1;
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        if (!ind[i])
        {
            return i;
        }
    }
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

    cout <<"Smallest Missing Value: "<< small_pos(arr, size) << endl;

}