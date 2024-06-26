#include<iostream>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

//Seive Of Erothenes - Print Prime Numbers until n
void primeSeive(int n)
{
    int prime[100] = {0};

    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == 0)
        {
            cout << i << endl;
        }
    }
}


int main()
{
    int size;
    cout << "Enter the value: ";
    cin >> size;

    primeSeive(size);

    return 0;
}