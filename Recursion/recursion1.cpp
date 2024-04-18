#include<iostream>

using namespace std;

//Check if array is sorted
bool sorted(int arr[], int n)
{
    if(n == 1)
    {
        return true;
    }
    return (arr[0]<arr[1] && sorted(arr+1, n-1));
}

//Print in increasing order
void inc(int n)
{
    if(n == 0)
    {
        return;
    }
    inc(n-1);
    cout << n<< endl;;
}

//Print in decreasing order
void dec(int n)
{
    if(n == 0)
    {
        return;
    }
    cout << n << endl;;
    dec(n-1);
}


int main()
{
    int arr[] = {1,2,3,4,1};
    //cout << sorted(arr, 5) << endl;
    inc(5);
    dec(5);



    return 0;
}