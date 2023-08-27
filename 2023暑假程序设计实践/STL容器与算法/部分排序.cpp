#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, r;
	cin >> n >> r;
	vector<int>nums;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		nums.push_back(j);
	}
	if (r * 2 < n)
		sort(nums.begin() + r, nums.end() - r);
	for (int i = 0; i < nums.size() - 1; i++)
		cout << nums[i] << " ";
	cout << nums.back();
	return 0;
}