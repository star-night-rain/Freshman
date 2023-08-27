#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int n, num, father, mother, k, x, y, sign;
vector<int>fa(10000), children, nums(10000, 1);
vector<double>home(10000), area(10000);

struct family
{
	int min;
	int num;
	double home;
	double area;
};

void init()
{
	for (int i = 1; i < 10000; i++)
		fa[i] = i;
}

int find(int x)
{
	return x == fa[x] ? x : (fa[x] = find(fa[x]));
}

void merge(int i, int j)
{
	int x = find(i), y = find(j);
	if (x < y)
	{
		fa[y] = x;
		home[x] += home[y];
		area[x] += area[y];
		nums[x] += nums[y];
		nums[y] = 0;
	}
	else if (x > y)
	{
		fa[x] = y;
		home[y] += home[x];
		area[y] += area[x];
		nums[y] += nums[x];
		nums[x] = 0;
	}
}

bool compare(family x, family y)
{
	if (x.area > y.area)
		return true;
	else if (x.area == y.area)
		return x.min < y.min;
	else
		return false;
}

int main()
{
	vector<family>result;
	family datas;
	cin >> n;
	init();
	while (n--)
	{
		cin >> num >> father >> mother >> k;
		children.resize(k);
		for (int i = 0; i < k; i++)
		{
			cin >> children[i];
		}
		cin >> x >> y;
		home[find(num)] += x;
		area[find(num)] += y;
		if (father != -1)
			merge(num, father);
		if (mother != -1)
			merge(num, mother);
		for (int i = 0; i < k; i++)
			merge(num, children[i]);
	}
	int sum = 0;
	for (int i = 0; i < 10000; i++)
		if (nums[i] > 1 || (fa[i] == i && nums[i] == 1 && home[i] != 0))
		{
			sum++;
			datas.min = fa[i];
			datas.num = nums[fa[i]];
			datas.home = home[fa[i]] / nums[fa[i]];
			datas.area = area[fa[i]] / nums[fa[i]];
			result.push_back(datas);
		}
	sort(result.begin(), result.end(), compare);
	nums.erase(unique(nums.begin(), nums.end()), nums.end());
	cout << sum << setiosflags(ios::fixed) << endl;
	for (int i = 0; i < result.size(); i++)
	{
		printf("%04d", result[i].min);
		cout << " " << result[i].num << " " << setprecision(3) << result[i].home;
		cout << " " << setprecision(3) << result[i].area << endl;
	}
	return 0;
}