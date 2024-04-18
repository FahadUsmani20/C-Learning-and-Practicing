#include<iostream>
using namespace std;

/*Swapping Array
Initial Array: 1 2 3 4 5 6 
Swapped Array: 2 1 4 3 6 5 
*/

void swap_alternate(int [], int);
void print_array(int [], int);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    print_array(arr, 6);
    swap_alternate(arr, 6);
    print_array(arr, 6);
    
    return 0;
}

void swap_alternate(int arr[], int size)
{
    int start = 0;

    while(start < size-1)
    {
        swap(arr[start],arr[start+1]);
        start += 2;
    }
}
void print_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}