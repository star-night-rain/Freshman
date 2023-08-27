#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int n, m, k, x, y;
vector<int>nums;
map<int, vector<int>>result;

double similarity(int x, int y)
{
	vector<int>a = result[x], b = result[y];
	vector<int>v1(min(a.size(), b.size())), v2(a.size() + b.size());
	auto end1 = set_intersection(a.begin(), a.end(), b.begin(), b.end(), v1.begin());
	auto end2 = set_union(a.begin(), a.end(), b.begin(), b.end(), v2.begin());
	v1.resize(end1 - v1.begin());
	v2.resize(end2 - v2.begin());
	double num = static_cast<double>(v1.size()) / v2.size();
	num *= 100;
	return num;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> m;
		nums.resize(m);
		for (int j = 0; j < m; j++)
			cin >> nums[j];
		sort(nums.begin(), nums.end());
		nums.erase(unique(nums.begin(), nums.end()), nums.end());
		result[i] = nums;
	}
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		cout << setiosflags(ios::fixed);
		cout << setprecision(2) << similarity(x, y) << "%" << endl;
	}
	return 0;
}