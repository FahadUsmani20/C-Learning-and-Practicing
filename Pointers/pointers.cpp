#include <iostream>

using namespace std;

void print(int *p)
{
    cout <<"Address: "<< p << endl;
    cout <<"Value: "<< *p << endl;
}

// void update(int *p)
// {
//     *p = *p + 1;
// }

void update(int **p)
{
    //p = p+1; // There will be no Change
    //*p = *p+1; // Will add 4 bytes[int] to address of p
     **p = **p+1; // Will add 1 to the value of i
}
int main()
{
    // Pointer Initialized
    // int*p = 0; Will give segmentation fault as 0 is not a valid address

    /*
    Method 1
    int i = 5;
    int*p = &i;

    cout << "Address is: " << p << endl;
    cout << "Value is: " << *p << endl;
    */

    /*
    int*q = 0;
    q = &i; // We can do this and it will work the same as previous method

    cout << "Address is: " << q << endl;
    cout << "Value is: " << *q << endl;
    */
    /*
    int num = 5;
    int a = num;
    a++; // This will not change 'num' as 'a' stores a copy of 'num'
    cout << "Number: " <<num << endl;
    */

    /*
    int *n = &num;
    (*n)++;
    // This defrences the address stored in n and then adds 1 to the value returned.
    // Note this will change the value of num as 'n' stores the address of 'num'.
    cout << "Number: " <<num << endl;
    */

    /*
    *n++;
    // This will not change the value stored in 'num'.
    // This is because in this case we are not defrencing the pointer.
    // We are taking the address and moving to the next address.
    // if we dereference this we will see that there is a garbage value.
    cout << "Num not changed Value: " <<num << endl;
    cout << "Garbage Value: " <<*n << endl;
    */

    /*
     //Copying a pointer

     int *c = &num;
     int*d = c;
     cout << c << " - " << d << endl;
     cout << *c << " - " << *d << endl;
    */

    /*
    Array Manipulations Using Pointers

    Interger Arrays:

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
    */
    /*
    Character Pointers
    char ch[6] = "abcde";

    cout << ch << endl;

    char*c = &ch[0];
    cout <<"Value in c: " << c << endl; // Gives the value stored in c
    cout <<"Address of c: " << &c << endl;

    char temp = 'z'; // Bad Practice as it access random memory
    char*p = &temp;
    cout << p;

   int value = 5;
   int *p = &value;

   cout << "Before Update" << endl;
   print(p);
   cout << "After Update" << endl;
   update(p); // We can update the value but not the address using functions.
   print(p);
    */

   // Double Pointers
   int i = 5;
   int *p = &i;
   int **p2 = &p;

   cout << "Printing Address i: " << &i << endl;
   cout << "Printing Address P: " << &p << endl;
   cout << "Printing Address P2: " << &p2 << endl;
   cout << endl;

   cout << "Printing Address Stored in P: " << p << endl;
   cout << "Printing Address Stored in P2: " << p2 << endl;
   cout << endl;
   
   cout << "Printing Value Stored in P: " << *p << endl;
   cout << "Printing Value Stored in P2 [will print the address stored in P]: " << *p2 << endl;
   cout << "Printing Value Stored in P2 [will print the value stored in P]: " << **p2 << endl;
   cout << endl;

   cout << "Before i: " << i << endl;
   cout << "Before p: " << p << endl;
   cout << "Before p2: " << p2 << endl;
   cout << endl;

   update(p2);
   
   cout << "After i: " << i << endl;
   cout << "After p: " << p << endl;
   cout << "After p2: " << p2 << endl;
   cout << endl;


    return 0;
}