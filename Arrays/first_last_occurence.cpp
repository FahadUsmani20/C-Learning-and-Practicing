#include<iostream>
#include<algorithm>

using namespace std;

// Note the array will be sorted

void first_occurence(int arr[], int size, int target)
{
    int start = 0, end = size - 1, ans = -1, mid;

    while(start <= end)
    {
        mid = start + (end-start)/2;

        if(arr[mid] == target)
        {
            ans = mid;
            end = mid-1;
        }

        else if(arr[mid] > target)
        {
            end = mid-1;
        }

        else
        {
            start = mid + 1;
        }
    }

    cout << "First Occurence: " << ans << endl;
}

void last_occurence(int arr[], int size, int target)
{
    int start = 0, end = size - 1, ans = -1, mid;

    while(start <= end)
    {
        mid = start + (end-start)/2;

        if(arr[mid] == target)
        {
            ans = mid;
            start = mid+1;
        }

        else if(arr[mid] > target)
        {
            end = mid-1;
        }

        else
        {
            start = mid + 1;
        }
    }

    cout << "Last Occurence: " << ans << endl;
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

    int size, target;

    cout << "Enter size of array: ";
    cin >> size;
    
    take_input(arr, size);

    cout << "Given Array: ";
    print_Array(arr, size);

    cout << "Enter Target: ";
    cin >> target;

    first_occurence(arr, size, target);
    last_occurence(arr, size, target);

}