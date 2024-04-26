#include<iostream>

using namespace std;

int main()
{
    char ch = 'q';
    cout <<"Size: "<< sizeof(ch) << endl;

    char* c = &ch;
    cout <<"Size: "<< sizeof(c) << endl;

    //Variable Size Array
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i]; // we can use *(arr + i)
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";// we can use *(arr + i)
    }



    return 0;
}