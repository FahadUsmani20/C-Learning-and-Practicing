#include<iostream>

using namespace std;

void forward(int n)
{
    if (n == 0)
    {
        return;
    }

    forward(n-1);
    cout << n << " ";

}

int main()
{
    int n;
    cout<< "Number: ";
    cin >> n;

    forward(n); 
    
    return 0;
}