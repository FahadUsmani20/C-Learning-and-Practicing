#include<iostream>

using namespace std;

void sayDigits(int n)
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    int digit = n %10;
    
    if (n <= 0)
    {
        return;
    }

    sayDigits(n/10);
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cout<< "Number: ";
    cin >> n;

    sayDigits(n); 
    
    return 0;
}