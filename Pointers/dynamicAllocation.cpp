#include<iostream>

using namespace std;

void update(int &n) // Pass by reference
{
    n++;
}

// Dynamic Allocation uses Same Address with Different Names
int main()
{
    int i = 5;

    //Reference Variable Initialization

    int &j = i; // j points to i, hence address of j == i
    cout << "Print i: " << i << endl;
    i++;
    cout << "Print j: " << j << endl;
    j++;
    cout << "Print i: " << i << endl;

    cout << "Address i: " << &i << endl;
    cout << "Address j: " << &j << endl;

    int a = 5;
    cout << "a: " <<a <<endl;
    update(a);
    cout << "a: " <<a <<endl;

    return 0;
}