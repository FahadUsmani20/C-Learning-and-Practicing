#include<iostream>
#include<algorithm>

using namespace std;

// Note the array will be sorted

int first_occurence(int arr[], int size, int target)
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

    return ans;
}

int last_occurence(int arr[], int size, int target)
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

    return ans;
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

    int f = first_occurence(arr, size, target);
    int l = last_occurence(arr, size, target);

    if(f == -1 || l == -1)
    {
        cout << "Elements Does not Occur" <<endl;
        return 0;
    }

    cout << "Total number of occurences of element " << target << " is: " << (l-f)+1;
}