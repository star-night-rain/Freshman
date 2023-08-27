#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
bool compare(const pair<int, int>x, const pair<int, int>y)
{
	if (x.second < y.second)
		return true;
	if (x.second == y.second && x.first < y.first)
		return true;
	return false;


}
int main()
{
	int n, m, a, num = 0;
	cin >> n;
	map<int, int>times, nums;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> a;
			times[a]++;
		}
	}
	auto site = *max_element(times.cbegin(), times.cend(), compare);
	cout << site.first << " " << site.second;
	return 0;
}