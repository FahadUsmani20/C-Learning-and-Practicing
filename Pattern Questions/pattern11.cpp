#include<iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns: " << endl;
    cin >> rows >> cols;
    /*
    Full Rectangle 
    * * * *
    * * * *
    * * * *
    * * * *
    * * * *
    for(int i =0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
    */

    /*
    Hollow Rectangle 
    * * * *
    *     *
    *     *
    *     *
    * * * *
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == 0 || i == rows-1 || j ==0 || j == cols-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    */


    int n;
    cout << "Size of pyramid: " <<endl;
    cin >> n;
    
    /*
    Inverted Half Pyramid
    * * * *
    * * *
    * *
    *
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
   */
    
    /*
    Inverted Half Pyramid
          *
        * *
      * * *
    * * * *
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1 ; j <= n; j++)
        {
            if(j <= n-i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
   */

    /*
    Half Pyramid with Numbers
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    */


    /*
    Floyds Triangle
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    int count = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    */

    /*
    ButterFly Pattern
    *             * 
    * *         * * 
    * * *     * * * 
    * * * * * * * * 
    * * * * * * * * 
    * * *     * * *
    * *         * *
    *             *
   
    Method 1 - time complexity O(n^2)
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*n; j++)
        {
            if( j <= i || j > 2*n - i)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 2*n; j++)
        {
            if( j <= n-i+1 || j > n + i - 1)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    cout << endl;
    
    Method 2 - time complexity O(n^3)

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        int space = 2 * n - 2 * i;
        
        for(int j = 1; j<=space; j++)
        {
            cout << "  ";
        }
        
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        int space = 2 * n - 2 * i;
        
        for(int j = 1; j<=space; j++)
        {
            cout << "  ";
        }
        
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */
    





}