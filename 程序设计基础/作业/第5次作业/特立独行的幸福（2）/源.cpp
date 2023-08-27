#include <iostream>
#include <cmath>
using namespace std;
int PrimeNumber(int x)
{
	double y = sqrt(double(x));
	for (int i = 2; i <= y; i++)
		if (x % i == 0)
			return 1;
	return 2;
}
int sum(int x)
{
	int sums = 0;
	while (x)
	{
		sums += (x % 10) * (x % 10);
		x /= 10;
	}
	return sums;
}
int main()
{
	int min, max;
	cin >> min >> max;
	int num[10000][2], sums[500] = { 0 }, repeat[10001] = { 0 };
	int x, y, z, a = 0;
	for (int i = min; i <= max; i++)
	{
		if (repeat[i] == 1)
			continue;
		x = 0;
		y = i;
		z = PrimeNumber(i);
		while (y)
		{
			y = sum(y);
			x++;
			if (y == 1)
			{
				num[a][0] = i;
				num[a++][1] = x * z;
				break;
			}
			else if (y >= min && y <= max && y != i)
			{
				repeat[y] = 1;
				continue;
			}
			else if (sums[y] == i)
				break;
			else
				sums[y] = i;
		}
	}
	if (a != 0)
	{
		for (int i = 0; i < a; i++)
			if (repeat[num[i][0]] == 0)
				cout << num[i][0] << " " << num[i][1] << endl;
	}
	else
		cout << "SAD";
	return 0;
}