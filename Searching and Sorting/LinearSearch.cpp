#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter Size: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter Elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key: " << endl;
    cin >> key;
    cout << "Index: " << linearSearch(arr, n, key);
    

    return 0;
}