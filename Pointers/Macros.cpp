#include<iostream>

using namespace std;

/*
Use #define to create Macros
Macros are a peice of code that are replaced by Macros.
Are Immutable
*/ 

/*
Global Variables. Can be Used by the whole program
*/ 

/*
Inline Functions [Tertiary Operator]: 

Used to reduce Function Overhead
Used Only for 1 line function

condition ? if true value : else value
Eg. Max_Element: (a>b) ? a : b [returns a if true, else returns b]

Declared as:
inline Max_Element
*/

/*
Default Arguments:
Give defult arguments to functions.
Need to give default arguments from righmost arguments
*/

#define PI 3.14

int main()
{
    int r = 5;
    double area = PI * 3.14 * r * r;

    cout << "Area: " << area << endl;
    return 0;
}