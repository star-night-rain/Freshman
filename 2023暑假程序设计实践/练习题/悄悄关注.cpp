#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<string>result;
int n, m, x;
double sum = 0;
map<string, int>attention, upvote;
string name;
int main()
{
	cin >> n;
	while (n--)
	{
		cin >> name;
		attention[name] = 1;
	}
	cin >> m;
	vector<string>names(m);
	for (int i = 0; i < m; i++)
	{
		cin >> names[i] >> x;
		upvote[names[i]] = x;
		sum += x;
	}
	sum /= m;
	for (int i = 0; i < m; i++)
	{
		if (attention[names[i]])
			continue;
		if (upvote[names[i]] > sum)
			result.push_back(names[i]);
	}
	sort(result.begin(), result.end());
	if (result.empty())
		cout << "Bing Mei You";
	else
		for (int i = 0; i < result.size(); i++)
			cout << result[i] << endl;
	return 0;
}