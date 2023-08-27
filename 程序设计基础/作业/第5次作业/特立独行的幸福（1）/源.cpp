#include <iostream>
#include <cmath>
using namespace std;
int summary(int x, int num2[])
{
	int a;
	int i1, sum = 0;
	for (i1 = 0; i1 < 5; i1++)
	{
		if (x > 0 && x < 10)
		{
			sum += num2[x];
			break;
		}
		a = x % 10;
		sum += num2[a];
		x /= 10;
	}
	return sum;
}
int isPrimeNumber(int i2)
{
	int j2;
	double i3 = sqrt(double(i2));
	for (j2 = 2; j2 <= i3; j2++)
	{
		if (i2 % j2 == 0)
			break;
	}
	if (j2 > i3)
		return 1;
	else
		return 0;
}
int main()
{
	int n, x, m, a, y, b = 0, num[10001] = { 0 }, i, num2[10];
	for (x = 0; x < 10; x++)
		num2[x] = x * x;
	cin >> n >> m;
	for (x = n; x <= m; x++)
		num[x] = summary(x, num2);
	for (x = n; x <= m; x++)
	{
		a = x;
		for (y = n; y <= m; y++)
		{
			if (a == num[y])
			{
				a = 0;
				b++;
				break;
			}
		}
		for (i = 0; a != 0; i++)
		{
			num[i] = summary(a, num2);
			for (int j = 0; j < i; j++)
			{
				if (num[i] == num[j])
				{
					a = 0;
					b++;
					break;
				}
			}
			if (a == 0)
				break;
			else if (num[i] == 1)
			{
				i++;
				break;
			}
			else
				a = summary(a, num2);
		}
		if (b == (m - n) + 1)
			cout << "SAD";
		else if (a != 0)
		{
			if (isPrimeNumber(x) == 1)
				cout << x << " " << (2 * i) << endl;
			else
				cout << x << " " << i << endl;
		}
	}
	return 0;
}