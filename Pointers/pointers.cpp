#include<iostream>

using namespace std;

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

   int num = 5;
   int a = num;
   a++; // This will not change 'num' as 'a' stores a copy of 'num'
   cout << "Number: " <<num << endl;


   int *n = &num;
   (*n)++; 
   // This defrences the address stored in n and then adds 1 to the value returned.
   // Note this will change the value of num as 'n' stores the address of 'num'.
   cout << "Number: " <<num << endl;

   *n++; 
   // This will not change the value stored in 'num'.
   // This is because in this case we are not defrencing the pointer.
   // We are taking the address and moving to the next address.
   // if we dereference this we will see that there is a garbage value.
   cout << "Num not changed Value: " <<num << endl;
   cout << "Garbage Value: " <<*n << endl;

   //Copying a pointer
   int *c = &num;
   int*d = c;
   cout << c << " - " << d << endl;
   cout << *c << " - " << *d << endl;
   

    return 0;
}