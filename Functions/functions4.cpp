#include<iostream>
#include<cmath>

using namespace std;

int factorial(int num)
{
    int fac = 2;
    while(num > 2)
    {
        fac *= num;
        num--;
    }
    return fac;
}

int main()
{   
    int num, r;
    cout << "Enter Number: " << endl;
    cin >> num >> r;
    cout << "Binary Coefficient: " << factorial(num) / (factorial(num-r) * factorial(r));
    cout << endl;
    return 0;
}