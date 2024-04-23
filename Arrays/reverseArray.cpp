#include<iostream>
#include<algorithm>

using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0, j = size - 1;

    while(i < j)
    {
        swap(arr[i], arr[j]);
        i++; j--;
    }
}

int main()
{
    int arr[100];
    
    for(int i = 0; i < 6 ; i++)
    {
        cout << "Enter Element: ";
        cin >> arr[i];  
    }

    reverseArray(arr, 6);

    for(int i =0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}