#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& result)
{
    if(index >= nums.size())
    {
        result.push_back(output);
        return;
    }

    //Exclude
    solve(nums, output, index+1, result);

    //Include
    output.push_back(nums[index]);
    solve(nums, output, index+1, result);
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> result;

    vector<int> output;

    int index = 0;

    solve(nums, output, index, result);

    return result;
}

void take_input(vector<int> &nums, int size)
{
    cout << "Enter Element: ";
    int ele;
    
    for(int i = 0; i < size ; i++)
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
    int size;
    cout << "Enter Size: ";
    cin >> size;
    vector<int> nums;

    take_input(nums, size);

    vector<vector<int>> res = subsets(nums);

    cout << "Power Sets: ";
    print_Array(res);
}