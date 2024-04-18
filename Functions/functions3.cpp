#include<iostream>
#include<cmath>

using namespace std;

void factorial(int num)
{
    int fac = 2;
    while(num > 2)
    {
        fac *= num;
        num--;
    }
    cout << fac;
}

int main()
{   
    int num;
    cout << "Enter Number: " << endl;
    cin >> num;
    factorial(num);
    cout << endl;
    return 0;
}