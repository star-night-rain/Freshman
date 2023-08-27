#include <iostream>
#include <vector>
using namespace std;
class Apple
{
public:
	friend istream& operator>>(istream& in, Apple& y)
	{
		cin >> y.num >> y.id >> y.weight >> y.diameter;
		return in;
	}
	friend ostream& operator<<(ostream& out, const Apple& x)
	{
		cout << x.num << " " << x.id << " " << x.weight << " " << x.diameter << endl;
		return out;
	}
	int show1()
	{
		return num;
	}
	int show2()
	{
		return weight;
	}
private:
	int num;
	char id[8];
	int weight;
	int diameter;
};

int main()
{
	int n, x, y;
	cin >> n;
	vector<int>nums(1000000);
	vector<int>max(1000000);
	vector <Apple> apple;
	Apple a;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		apple.push_back(a);
		x = a.show1();
		y = a.show2();
		if (y > max[x])
		{
			nums[x] = i;
			max[x] = y;
		}
	}
	int m = 0;
	for (int i = 0; i < 1000000; i++)
	{
		if (max[i] != 0)
			m++;
	}
	for (int i = 1, j = 0; i <= 1000000; i++)
	{
		if (nums[i] != 0)
		{
			cout << apple[nums[i] - 1];
			j++;
		}
		if (j == m)
			break;
	}
	return 0;
}