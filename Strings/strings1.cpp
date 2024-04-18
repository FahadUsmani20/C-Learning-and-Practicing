#include<iostream>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    //convert into uppercase:
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
    cout << str<<endl;
    
    //convert into Lowercase:
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i]<='Z')
        {
            str[i] += 32;
        }
    }
    cout << str <<endl;

    transform(str.begin(), str.end(), str.begin(), :: toupper);
    cout << str <<endl;
    transform(str.begin(), str.end(), str.begin(), :: tolower);
    cout << str <<endl;

    //Sorting strings

    string s = "637624965984";
    sort(s.begin(), s.end(), greater<int>());
    cout << s <<endl;
    
    //Frequency of maximum character
    string c = "fsdfhabfisdbfibisc";

    int freq[26];

    for(int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; c.length(); i++)
    {
        freq[s[i]-'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;


    return 0;

}