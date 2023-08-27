#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>nums(3);
	for (int i = 0; i < 3; i++)
		cin >> nums[i];
	sort(nums.begin(), nums.end());
	cout << nums[0] << "->" << nums[1] << "->" << nums[2];
	return 0;
}