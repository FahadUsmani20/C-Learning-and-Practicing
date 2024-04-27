#include<iostream>

using namespace std;

void reverse(int n)
{
    cout << n << " ";
    if (n == 1)
    {
        return;
    }

    reverse(n-1);

}

int main()
{
    int n;
    cout<< "Number: ";
    cin >> n;

    reverse(n); 
    
    return 0;
}