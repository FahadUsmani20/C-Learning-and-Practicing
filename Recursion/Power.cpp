#include<iostream>

using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 2 * power(n-1);
}

int main()
{
    int n;
    cout<< "Number: ";
    cin >> n;

    cout << "Power: " << power(n) << endl; 
     

    return 0;
}