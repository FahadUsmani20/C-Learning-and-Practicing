#include<iostream>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

//Find unique number in array where all numbers except one, are present thrice

bool getBit(int n, int p)
{
    return ((n & (1 << p)) != 0);
}

int setBit(int n, int p)
{
    return (n | (1 << p));
}


int unique(int arr[], int n)
{
    int result = 0;
    
    for(int i = 0; i < 64; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            if(getBit(arr[j], i))
            {
                sum++;
            }
        }
        if(sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }

    return result;
}

int main()
{
    

    int arr[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    cout << unique(arr, 10) <<endl;
    return 0;
}