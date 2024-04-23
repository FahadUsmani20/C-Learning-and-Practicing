#include<iostream>
#include<algorithm>

using namespace std;

void findUnique(int arr[], int size)
{
    int check[100] = {0}, maxi = INT_MIN;

    for(int i = 0; i< size; i++)
    {
        check[arr[i]] += 1;
        maxi = max(arr[i], maxi);
    }

    for(int i= 0; i <= maxi; i++)
    {
        if (check[i] == 1)
        {
            cout << "Unique Element is: " << i << endl;
            return ;
        }
    }

    cout << "No Unique Element Found" << endl;
    return;
}

void take_input(int arr[], int size)
{
    cout << "Enter Element: ";
    for(int i = 0; i < size ; i++)
    {
        cin >> arr[i];  
    }
}

void print_Array(int arr[], int size)
{
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];

    int size;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);

    cout << "Given Array: ";
    print_Array(arr, size);

    findUnique(arr, size);

    return 0;
}