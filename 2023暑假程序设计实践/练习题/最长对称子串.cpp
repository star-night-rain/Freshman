#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<int>nums(s.size(), 1);
    int x;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; i + j < s.size() && i - j >= 0; j++)
        {
            if (s[i + j] == s[i - j])
                nums[i] += 2;
            else
                break;
        }
        x = nums[i];
        nums[i] = 1;
        for (int j = 1; i + j < s.size() && i - j + 1 >= 0; j++)
        {
            if (s[i - j + 1] == s[i + j])
                nums[i] = 2 * j;
            else
                break;
        }
        nums[i] = max(nums[i], x);
    }
    cout << *max_element(nums.begin(), nums.end());
    return 0;
}