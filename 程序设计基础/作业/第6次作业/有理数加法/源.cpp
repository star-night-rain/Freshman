#include <iostream>
using namespace std;
int factor(int x, int y)
{
	int i = 1;
	int max = i;
	for (; i <= x || i <= y; i++)
		if (x % i == 0 && y % i == 0)
			max = i;
	return max;
}
int main()
{
	int a, b, c, d;
	scanf("%d/%d %d/%d", &a, &b, &c, &d);
	int x, y,z;
	x = a * d;
	y = b * c;
	z = b * d;
	float m,i, j;
	int n = x + y;
	if (n == z)
		cout << "1";
	else if(n>z)
	{
		if (n % z == 0)
			cout << n / z;
		else
		{
			m = factor(n, z);
			cout << n / m << "/" << z / m;
		}
	}
	else
	{
		if (z % n == 0)
			cout <<"1"<<"/"<<z/n;
		else
		{
			m = factor(n, z);
			cout << n / m << "/" << z / m;
		}
	}
	return 0;
}