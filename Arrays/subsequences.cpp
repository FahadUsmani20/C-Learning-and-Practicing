#include<iostream>
#include<vector>

using namespace std;

void solve(string str, string output, int index, vector<string>& ans)
{
    if(index >= str.length())
    {
        if(output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    //Exclude
    solve(str, output, index+1, ans);

    //Include
    output.push_back(str[index]);
    solve(str, output, index+1, ans);
}

vector<string> subsequence(string str)
{
    vector<string> ans;
    string output = "";

    int index = 0;

    solve(str, output, index, ans);

    return ans;
}

void take_input(string &str)
{
    cout << "Enter string: ";
    cin >> str;
}

void print_Array(vector<string> result)
{
    for(auto it: result)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    string str;

    take_input(str);

    vector<string> res = subsequence(str);

    cout << "Subsequences: ";
    print_Array(res);
}