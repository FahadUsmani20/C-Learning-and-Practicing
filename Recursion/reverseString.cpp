#include<iostream>

using namespace std;

void reverseString(char n[],int start, int end)
{
    if(start > end)
    {
        return;
    }

    swap(n[start], n[end]);
    reverseString(n, start+1, end-1);
}

int main()
{
    char c[100];
    int n;
    
    cout<< "Size: ";
    cin >> n;
    
    cout<< "Enter String: ";
    cin >> c;



    reverseString(c, 0, n-1);
    cout << "Reverse String: " << c;
    
    return 0;
}