#include <iostream>
#include <vector>
using namespace std;
int n, m, k, active = 0;
vector<int>datas(100000), nums(100000), result;
int main()
{
	cin >> n;
	while (n--)
	{
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> k;
			if (m > 1)
				datas[k] = 1;
		}
	}
	cin >> n;
	while (n--)
	{
		cin >> k;
		if (datas[k] == 0)
		{
			if (nums[k] == 0)
			{
				active = 1;
				result.push_back(k);
			}
			nums[k] = 1;
		}
	}
	if (active)
	{
		printf("%05d", result[0]);
		for (int i = 1; i < result.size(); i++)
			printf(" %05d", result[i]);
	}
	else
		cout << "No one is handsome";
	return 0;
}