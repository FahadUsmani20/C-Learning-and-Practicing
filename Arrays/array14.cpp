#include<iostream>
#include<climits>

using namespace std;
/*
Largest Word in a sentence 
*/

int main()
{
    int n, length = 0;
    cin >> n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();
    
    int i = 0, count = 0;

    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(count > length)
            {
                length = count;
            }

            count = 0;
        }

        else
        {
            count++;
        }

        if(arr[i] == '\0')
        {
            break;
        }
        
        i++;
    }

    cout << "Maximum Length: " << length << endl;

    return 0;

}