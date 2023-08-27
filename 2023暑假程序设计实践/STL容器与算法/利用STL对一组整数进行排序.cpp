#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>nums;
	int num;
	while (cin >> num)
		nums.push_back(num);
	sort(nums.begin(), nums.end());
	for (auto i = nums.begin(); i != nums.end(); i++)
		cout << " " << *i;
	return 0;
}