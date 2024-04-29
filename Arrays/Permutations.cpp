#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);

        //backtrack
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> permutations(vector<int> &nums )
{
    vector<vector<int>> ans;

    int index = 0;

    solve(nums, ans, index);

    return ans;
}

void take_input(vector<int> &nums, int size)
{
    int ele;
    cout << "Enter Elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> ele;
        nums.push_back(ele);
    }
}

void print_Array(vector<vector<int>> result)
{
    cout << "{";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "{";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j != result[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "}";
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

int main()
{
    vector<int> nums;
    int size;

    cout << "Enter Size: ";
    cin >> size;

    take_input(nums, size);

    vector<vector<int>> res = permutations(nums);

    cout << "Permutaions: ";
    print_Array(res);
}