#include <iostream>
#include <vector>
using namespace std;

class nation
{
private:
	int num;
	int sum;
public:
	static vector<int> trade;
	nation(int x = 0, int y = 0) { num = x; sum = y; }
	void setnum(int x) { num = x; }
	void setsum(int x) { sum += x; }
	bool operator>(nation x);
	friend ostream& operator << (ostream& out, const nation& x);
};
bool nation::operator >(nation x)
{
	if (sum > x.sum) { return true; }
	else if (sum == x.sum)
	{
		if (nation::trade[num - 1] > nation::trade[x.num - 1])
			return true;
		else if (nation::trade[num - 1] == nation::trade[x.num - 1])
		{
			if (num < x.num)
				return true;
			else
				return false;
		}
	}
	return false;
}
ostream& operator<<(ostream& out, const nation& x)
{
	out << x.num << " " << x.sum << endl;;
	return out;
}
vector<int> nation::trade(104, 0);

int main()
{
	int n;
	cin >> n;
	nation nations[104];
	int m, x, y, z;
	for (int i = 0; i < n; i++)
	{
		z = 0;
		cin >> m;
		nation::trade[i] += m;
		for (int j = 0; j < m; j++)
		{
			cin >> x >> y;
			nation::trade[x - 1]++;
			nations[x - 1].setsum(-y);
			z += y;
		}
		nations[i].setnum(i + 1);
		nations[i].setsum(z);
	}
	int pa = n - 1, pb;
	nation pc;
	while (pa)
	{
		pb = pa;
		pa = 0;
		for (int i = 0; i < pb; i++)
		{
			if (nations[i] > nations[i + 1])
			{
				pc = nations[i];
				nations[i] = nations[i + 1];
				nations[i + 1] = pc;
				pa = i;
			}
		}
	}
	for (int i = n - 1; i >= 0; i--)
		cout << nations[i];
}