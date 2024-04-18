#include<iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter Size: " << endl;
    cin >> size;
    /*
    inverted Pattern
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    */


    /*
    0-1 Pattern
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

    for(int i = 1; i <=size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if ((i-j) % 2 != 0)
            {
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    */

    /*
    Rhombus Pattern
            * * * * *
          * * * * *
        * * * * *
      * * * * *
    * * * * *

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size - i; j++)
        {
            cout << "  ";
        }
        for(int k = 1; k <= size; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */

    /*
    Number Pattern
              1   
            1   2   
          1   2   3   
        1   2   3   4   
      1   2   3   4   5 

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j<= size-i; j++)
        {
            cout << "  ";
        }

        for(int k = 1; k <= i; k++)
        {
            cout << k << "   ";
        }
        cout << endl;
    }
    */
    
    /*
    Palindromic Pattern
                    1 
                  2 1 2 
                3 2 1 2 3 
              4 3 2 1 2 3 4 
            5 4 3 2 1 2 3 4 5      

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j<= size-i; j++)
        {
            cout << "  ";
        }

        for(int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        
        for(int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    */

    /*
    Start Pattern

                      * 
                    * * * 
                  * * * * * 
                * * * * * * * 
                * * * * * * * 
                  * * * * * 
                    * * * 
                      *

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j<= size - i; j++)
        {
            cout << "  ";
        }

        for(int k = 1; k <= 2*i - 1; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    
    for(int i = size; i >= 1; i--)
    {
        for(int j = 1; j<= size - i; j++)
        {
            cout << "  ";
        }

        for(int k = 1; k <= 2*i - 1; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    */

    /*
    Zig-Zag Pattern
        *       *     
      *   *   *   *   
    *       *       * 
    */

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= size; j++)
        {
            if((i + j)%4==0 || i ==2 && j%4==0)
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


}