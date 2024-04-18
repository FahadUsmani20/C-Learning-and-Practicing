#include<iostream>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

//Two unique Numbers in an array

int setBit(int n, int p)
{
    return (n & (1 << p)) != 0;
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for(int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0, pos = 0;

    while(setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(setBit(arr[i], pos-1))
        {
            newxor ^= arr[i];
        }
    }

    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;

}
int main()
{
    

    int arr[8] = {1, 2, 3, 5, 1, 2, 3, 6};
    unique(arr, 8);
    return 0;
}