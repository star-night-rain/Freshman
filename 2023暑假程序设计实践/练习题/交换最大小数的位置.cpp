#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int>nums(n);
		for (int i = 0; i < n; i++)
			cin >> nums[i];
		auto min = min_element(nums.begin(), nums.end());
		int b = *min;
		*min = nums.front();
		nums.front() = b;
		auto max = max_element(nums.begin(), nums.end());
		int a = *max;
		*max = nums.back();
		nums.back() = a;
		cout << nums[0];
		for (int i = 1; i < n; i++)
			cout << " " << nums[i];
		cout << endl;
	}
	return 0;
}