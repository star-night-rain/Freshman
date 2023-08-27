#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int m = n;
	vector<int>nums;
	int test = 0;
	for (int i = 1; test <= n; i++)
		test = pow(x, i);
	test /= x;
	while (test)
	{
		nums.push_back(m / test);
		if (m >= test * nums.back())
			m -= test * nums.back();
		test /= x;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < 10)
			cout << nums[i];
		else
			cout << char('A' + nums[i] - 10);
	}

}