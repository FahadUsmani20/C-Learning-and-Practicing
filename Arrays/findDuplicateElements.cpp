#include<iostream>
#include<algorithm>

using namespace std;

void findDuplicate(int arr[], int size)
{
    int check[100] = {0}, duplicate[100] = {0}, count = 0;

    for(int i = 0; i < size; i++)
    {
        check[arr[i]]++;
        if(check[arr[i]] == 2)
        {
            duplicate[count] = arr[i];
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No Duplicate Elements found!";
        return;
    }

    cout << "Duplicate Elements Are: ";

    for(int i = 0; i < count; i++)
    {
        cout << duplicate[i] << " ";
    }
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

    findDuplicate(arr, size);

    return 0;
}