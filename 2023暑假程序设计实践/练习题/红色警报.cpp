#include <iostream>
#include <vector>
#include <map>
using namespace std;
int n, m, k, start, ending, city, num = 0;
vector<int>fa, ran, lost;

void init(int n)
{
	for (int i = 0; i < n; i++)
	{
		fa[i] = i;
		ran[i] = 1;
	}
}


int find(int x)
{
	return x == fa[x] ? x : (fa[x] = find(fa[x]));
}

void merge(int i, int j)
{
	int x = find(i), y = find(j);
	if (x == y)
		return;
	if (ran[x] <= ran[y])
		fa[x] = y;
	else
		fa[y] = x;
	if (ran[x] == ran[y] && x != y)
		ran[y]++;
}

int count()
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (fa[i] == i)
			sum++;
	return sum;
}

int main()
{
	cin >> n >> m;
	vector<pair<int, int>>roads(m);
	fa.resize(n);
	ran.resize(n);
	lost.resize(n);
	init(n);
	for (int i = 0, x, y; i < m; i++)
	{
		cin >> x >> y;
		merge(x, y);
		roads[i].first = x;
		roads[i].second = y;
	}
	cin >> k;
	start = count();
	while (k--)
	{
		cin >> city;
		lost[city] = 1;
		init(n);
		num++;
		for (int i = 0; i < m; i++)
		{
			if (lost[roads[i].first] || lost[roads[i].second])
				continue;
			merge(roads[i].first, roads[i].second);
		}
		ending = count();
		if (ending - start >= 2)
			cout << "Red Alert: City " << city << " is lost!" << endl;
		else
			cout << "City " << city << " is lost." << endl;
		if (num == n)
			cout << "Game Over.";
		start = ending;
	}
	return 0;
}
