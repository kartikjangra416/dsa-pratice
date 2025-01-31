#include <iostream>
#include <vector>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}
void solve(string &str, int left, int right, vector<string> &ans)
{

    if (left == right)
    {
        ans.push_back(str);
        return;
    }
    for (int i = left; i <= right; i++)
    {
        swap(str[left], str[i]);          // Swap current character with the first character
        solve(str, left + 1, right, ans); // Recur for the rest of the string
        swap(str[left], str[i]);          // Backtrack to restore the original string }
    }
}
vector<string> permutation(string str)
{
    vector<string> ans;

    solve(str, 0, str.size() - 1, ans);
    return ans;
}
void printPermutations(const vector<string> &permutations)
{
    for (const string &permutation : permutations)
    {
        cout << permutation << " ";
    }
    cout << endl;
}

int main()
{
    string str = "ABC";
    vector<string> result = permutation(str);
    printPermutations(result);
    return 0;
}
