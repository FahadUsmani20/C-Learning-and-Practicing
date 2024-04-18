#include<iostream>
#include<algorithm>

using namespace std;

void dnfSort(int arr[], int n)
{
    int low = 0, mid = 0 , high = n-1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++; mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}

int main()
{
    int arr[] = {0,1,1,0,2,2,1,0,2,1,0};

    cout << "Before Sorting: "<<endl;

    for(int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;
    
    cout << "After Sorting: "<<endl;
    dnfSort(arr,11);

    for(int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl;

    return 0;
}