#include<iostream>

using namespace std;

char maxOccuringCharacter(string s)
{
    int arr[26] = {0};

    int index = 0;

    //Create an array of count of characters
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a';
        }
        else
        {
            index = s[i] - 'A';
        }
        arr[index]++;
    }

    //Find maximum occuring characters 
    int maxEle = -1, ans = -1;
    
    for(int i = 0; i < 26; i++)
    {
        if(maxEle < arr[i])
        {
            ans = i;
            maxEle = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{
    char s[100];

    cout << "Enter String: ";
    cin >> s;
    
    cout << "Maximum Occuring Element: " << maxOccuringCharacter(s);
    return 0;
}