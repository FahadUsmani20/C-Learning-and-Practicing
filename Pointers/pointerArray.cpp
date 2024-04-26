#include <iostream>

using namespace std;

void print(int *p)
{
    cout <<"Address: "<< p << endl;
    cout <<"Value: "<< *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
}

int main()
{
    
    //Array Manipulations Using Pointers

    //Interger Arrays:

    int arr[10] = {0};
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 5;

    cout << "Address: " << arr << endl;
    cout << "Address is using &: " << &arr[0] << endl;

    cout << "Value using arr[0]: " << arr[0] << endl;
    cout << "Value using *arr: " << *arr << endl;
    cout << "Value at arr[0] + 1: " << *arr + 1 << endl;
    cout << "Value at arr[2]: " << *(arr + 2) << endl;
    cout << "Value at *(1+arr): " << *(1+ arr) << endl;
    cout << "Value at 1[arr]: " << 1[arr] << endl;

    cout << "Address &arr[0]: " << &arr[0] << endl;
    cout << "Address &arr: " << &arr << endl;
    cout << "Address arr: " << arr << endl;

    int *p = arr;
    cout << "Address p: " << p << endl;
    cout << "Address &p: " << &p << endl;
    
    //Character Pointers
    char ch[6] = "abcde";

    cout << ch << endl;

    char*c = &ch[0];
    cout <<"Value in c: " << c << endl; // Gives the value stored in c
    cout <<"Address of c: " << &c << endl;

    // char temp = 'z'; // Bad Practice as it access random memory
    // char*ptr = &temp;
    // cout << ptr;

   int value = 5;
   int *v = &value;

   cout << "Before Update" << endl;
   print(v);
   cout << "After Update" << endl;
   update(v); // We can update the value but not the address using functions.
   print(v);

    return 0;
}