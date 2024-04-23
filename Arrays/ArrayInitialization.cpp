#include<iostream>

using namespace std;

int main()
{
    int arr[100];
    fill(arr, arr+100, 2);

    for(int i =0; i < 100; i++)
    {
        cout << arr[i] << endl;
    }
}