#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, vector<string> &keypad)
{
    // Base case
    if (index == digits.size())
    {
        ans.push_back(output);
        return;
    }

    // Get the current digit
    int currentDigit = digits[index] - '0'; // Convert char to int
    string letters = keypad[currentDigit];

    // Loop through each character of the keypad digit string
    for (int i = 0; i < letters.size(); i++)
    {
        output.push_back(letters[i]);
        solve(digits, output, index + 1, ans, keypad);
        output.pop_back(); // Backtrack }
    }
 }
    vector<string> lettercombinations(string digits)
    {
        vector<string> ans;
        if (digits.empty())
        {
            return ans;
        }
        vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        string output = "";
        int index = 0;
        solve(digits, output, index, ans, keypad);
        return ans;
    }

    void printCombinations(const vector<string> &combinations)
    {
        for (const string &combination : combinations)
        {
            cout << combination << " ";
        }
        cout << endl;
    }

    int main()
    {
        string digits = "23";
        vector<string> result = lettercombinations(digits);
        printCombinations(result);
        return 0;
    }
