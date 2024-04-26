#include <iostream>

using namespace std;

void print(int *p)
{
    cout <<"Address: "<< p << endl;
    cout <<"Value: "<< *p << endl;
}

void update(int **p)
{
    //p = p+1; // There will be no Change
    //*p = *p+1; // Will add 4 bytes[int] to address of p
     **p = **p+1; // Will add 1 to the value of i
}
int main()
{
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