#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>path;
vector<vector<int>>result;
int n;

void backtracking(vector<int>nums, vector<int>used)
{
	if (path.size() == n)
	{
		result.push_back(path);
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (i > 0)
			if (nums[i] == nums[i - 1] && !used[i - 1])
				continue;
		if (used[i])
			continue;
		used[i] = 1;
		path.push_back(nums[i]);
		backtracking(nums, used);
		used[i] = 0;
		path.pop_back();
	}
}
int main()
{
	cin >> n;
	vector<int>nums(n);
	vector<int>used(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	sort(nums.begin(), nums.end());
	backtracking(nums, used);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i][0];
		for (int j = 1; j < n; j++)
			cout << " " << result[i][j];
		cout << endl;
	}
	return 0;
}