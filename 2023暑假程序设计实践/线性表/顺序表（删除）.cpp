#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	int min, max;
	cin >> min >> max;
	bool judge = 0;
	for (int i = 0; i < n; i++)
		if (!(nums[i] >= min && nums[i] <= max))
		{
			if (judge)
				cout << " ";
			cout << nums[i];
			judge = 1;
		}
	return 0;
}