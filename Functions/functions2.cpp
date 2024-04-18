#include<iostream>
#include<cmath>

using namespace std;

void fib(int num)
{
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for(int i = 2; i < num; i++)
    {
        cout << a + b << " ";
        b = a+b;
        a = b-a;
    }
}

int main()
{   
    int num;
    cout << "Enter Number of elements: " << endl;
    cin >> num;
    fib(num);
    cout << endl;
    return 0;
}