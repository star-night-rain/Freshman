#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int n, m, x, y;
struct person
{
	int num;
	int sum = 0;
	int time = 0;
};

bool compare(person a, person b)
{
	if (a.sum > b.sum)
		return true;
	else if (a.sum == b.sum)
	{
		if (a.time > b.time)
			return true;
		else if (a.time == b.time)
			return a.num < b.num;
		else
			return false;
	}
	else
		return false;
}
int main()
{
	cin >> n;
	vector<person>datas(n);
	for (int i = 0; i < n; i++)
	{
		datas[i].num = i + 1;
		cin >> m;
		while (m--)
		{
			cin >> x >> y;
			datas[i].sum -= y;
			datas[x - 1].sum += y;
			datas[x - 1].time++;
		}
	}
	sort(datas.begin(), datas.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << datas[i].num << " ";
		cout << setiosflags(ios::fixed);
		cout << setprecision(2) << datas[i].sum / 100.0 << endl;
	}
	return 0;
}