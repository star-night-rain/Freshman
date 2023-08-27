#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string x, string y)
{
	return x + y > y + x;
}
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string>nums(n);
		for (int i = 0; i < n; i++)
			cin >> nums[i];
		sort(nums.begin(), nums.end(), compare);
		for (unsigned int i = 0; i < nums.size(); i++)
			cout << nums[i];
		cout << endl;
	}
	return 0;
}