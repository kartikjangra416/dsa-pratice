// #include <iostream>
// #include <vector>
// using namespace std;
// void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
// {

//     // base case
//     if (index == nums.size())
//     {

//         ans.push_back(output);
//         return;
//     }
//     // exclude wala
//     solve(nums, output, index+1, ans);
//     // include wala
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums, output, index+1, ans);
// }
// vector<vector<int>> subset(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     vector<int> output;
//     int index = 0;
//     solve(nums, output, index, ans);
//     return ans;
// }
// void printPowerSet(vector<vector<int>> &powerSet)
// {
//     for (int i = 0; i < powerSet.size(); ++i)
//     {
//         cout << "{";
//         for (int j = 0; j < powerSet[i].size(); ++j)
//         {
//             cout << powerSet[i][j];
//             if (j < powerSet[i].size() - 1)
//             {
//                 cout << ", ";
//             }
//         }
//         cout << "} ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> result = subset(nums);
//     printPowerSet(result);
// }

// subsequence non empty
#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // Base case
    if (index == str.size()) {
        if (!output.empty()) { // Exclude empty subsequence
            ans.push_back(output);
        }
        return;
    }

    // Exclude the current character and move to the next character
    solve(str, output, index + 1, ans);

    // Include the current character and move to the next character
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

void printSubsequences(vector<string>& subsequences) {
    for (const string& subsequence : subsequences) {
        cout << "\"" << subsequence << "\" ";
    }
    cout << endl;
}

int main() {
    string str = "abc";
    vector<string> result = subsequences(str);
    printSubsequences(result);
    return 0;
}
