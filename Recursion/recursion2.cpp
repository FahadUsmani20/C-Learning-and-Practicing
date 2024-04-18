#include<iostream>

using namespace std;

//Find the first and last occurence of a number in an array
int firstocc(int arr[], int n, int i, int k)
{
    if(i == n)
    {
        return -1;
    }
    
    if(arr[i] == k)
    {
        return i;
    }

    return firstocc(arr, n , i+1, k);
}
int lastocc(int arr[], int n, int i, int k)
{

    if(i == n)
    {
        return -1;
    }

    if(lastocc(arr, n, i+1, k) != -1)
    {
        return lastocc(arr, n, i+1, k);
    }
     
    if(arr[i] == k)
    {
        return i;
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,2};
    cout << firstocc(arr, 5, 0, 2)<< endl;
    cout << lastocc(arr,5,0,2)<< endl;

    return 0;
}