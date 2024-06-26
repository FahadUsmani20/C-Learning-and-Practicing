#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    int counter = 1;
    bool swapped = false;
    
    while(counter < n)
    {
        for(int i = 0; i < n - counter; i++)
        {
            if(arr[i] > arr[i+1])
            {   
                swapped = true;
                swap(arr[i], arr[i+1]);
            }
        }
        if(!swapped)
        {
            break;
        }
        counter++;
    }
}

int main()
{
    int n;
    cout << "Enter Size: " <<endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);

    cout << "After Sorting:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}