#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class My_Print
{
public:
	void operator()(int value)
	{
		cout << " " << value;
	}
};
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
	vector<int>target1, target2;
	target1.resize(min(set1.size(), set2.size()));
	auto end1 = set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), target1.begin());
	target1.resize(end1 - target1.begin());

	target2.resize(set1.size() + set2.size());
	auto end2 = set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), target2.begin());
	target2.resize(end2 - target2.begin());

	if (target1.empty())
		cout << "0";
	else
	{
		cout << target1.size();
		for_each(target1.begin(), target1.end(), My_Print());
	}
	cout << endl;
	if (target2.empty())
		cout << "0";
	else
	{
		cout << target2.size();
		for_each(target2.begin(), target2.end(), My_Print());
	}
	return 0;
}