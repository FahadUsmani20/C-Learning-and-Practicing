#include<iostream>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

int get_bit(int n, int p)
{
    return ((n & (1 << p)) != 0);
}

int set_bit(int n, int p)
{
    return (n | (1 << p));
}

int clear_bit(int n, int p)
{
    return (n & ~(1 << p));
}
int update_bit(int n, int p, int value)
{
    n = (n & ~(1 << p));
    return (n | (value << p));
}

void subsets(int arr[], int n)
{
    for(int i = 0; i < (1 << n); i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i & (1<<j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n, p;
    cout << "Enter Number and Position of bit: " << endl;
    cin >> n >> p;

    //cout << get_bit(n, p) << endl;
    //cout << set_bit(n, p) << endl;
    // cout << clear_bit(n, p) << endl;
    //cout << update_bit(n, p, 1) << endl;
    int arr[4] = {1,2,3,4};
    subsets(arr, 4);
    return 0;
}