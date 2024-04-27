#include<iostream>

using namespace std;

int climbStairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    
    if (n == 0)
    {
        return 1;
    }

    return climbStairs(n-1) + climbStairs(n-2);
}

int main()
{
    int n;
    cout<< "No of stairs: ";
    cin >> n;

    cout << "Distinct Ways to climb the stairs: " << climbStairs(3) << endl;;
    
    return 0;
}