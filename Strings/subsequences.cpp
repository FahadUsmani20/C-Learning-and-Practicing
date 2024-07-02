#include<iostream>
#include<vector>

using namespace std;

void solve(string s, string output, vector<string>& ans, int index)
{
    if(index >= s.size())
    {
        ans.push_back(output);
        return;
    }

    //Exclude
    solve(s, output, ans, index+1);

    //Include
    output.push_back(s[index]);
    solve(s, output, ans, index+1);
}


vector<string> subsequences(string& s)
{
    vector<string> ans;
    string output = "";

    int index = 0;
    solve(s, output, ans, index);

    return ans;
}

int main()
{
    string s = "abc";
    vector<string> answer = subsequences(s);
    for(int i = 0; i < answer.size(); i++)
    {
        cout << answer[i]<< " ";
    }


    return 0;
}