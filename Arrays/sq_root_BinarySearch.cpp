#include<iostream>
#include<algorithm>

using namespace std;

int mySqrt(int x) 
{
    long start = 0, end = x, mid;
    while (start <= end)
    {
        mid =  start + (end -  start) / 2;
        if ( mid * mid <= x && (mid + 1) * (mid + 1) > x)
            return mid;

        else if (mid * mid > x)
            end = mid - 1;
        
        else 
            start = mid + 1; 
    }
    return 1;
}

int main()
{
    int x;

    cout << "Enter Element: ";
    cin >> x;
    
    cout << "Square root of " << x << " to the nearest digit is: " << mySqrt(x) << endl;
    return 0;

}

