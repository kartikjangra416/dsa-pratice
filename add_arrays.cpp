#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> add(vector<int> arr1, vector<int> arr2)
{
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    vector<int> result;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += arr1[i--];
        }
        if (j >= 0)
        {
            sum += arr2[j--];
        }

        carry = sum / 10;
        int value = sum % 10;

        result.push_back(value);
    }
    reverse(result.begin(),result.end());
    return result;
}
void print(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {9};
    vector<int> arr3 = {9, 9, 9};
    vector<int> arr4 = {9, 9, 9};

    vector<int> result1 = add(arr1, arr2);
    vector<int> result2 = add(arr3, arr4);

    print(result1);
    print(result2);
}