#include <iostream>
#include <cmath>
using namespace std;
void sum(int& x, int& y, const int a, const int b)
{
	if (x == 0)
	{
		x = a;
		y = b;
	}
	else
	{
		x = x * b + a * y;
		y = y * b;
		if (y < 0)
		{
			x *= -1;
			y *= -1;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int a, b;
	char c;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> c >> b;
		sum(x, y, a, b);
	}
	int num = x / y;
	x -= num * y;
	if (x == 0)
		cout << num;
	else
	{
		for (int i = fabs(x); i > 1; i--)
		{
			if (x % i == 0 && y % i == 0)
			{
				x /= i;
				y /= i;
			}
		}
		if (num == 0)
			cout << x << '/' << y;
		else
			cout << num << " " << x << '/' << y;
	}
	return 0;
}