#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>set1(n), set2(m);
	for (int i = 0; i < n; i++)
		cin >> set1[i];
	for (int i = 0; i < m; i++)
		cin >> set2[i];
	sort(set1.begin(), set1.end());
	sort(set2.begin(), set2.end());
	vector<int>set3(n);
	auto end = set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), set3.begin());
	set3.resize(end - set3.begin());
	if (set3.empty())
		cout << "0";
	else
	{
		for (int i = 0; i < set3.size(); i++)
			cout << set3[i] << " ";
	}
	return 0;
}