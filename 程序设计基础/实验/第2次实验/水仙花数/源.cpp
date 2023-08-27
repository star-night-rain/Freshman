#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num[7];
	int a, b, i, j, x, y, c, z;
	x = pow(10, (n - 1));
	y = pow(10, n);
	int sum[10];
	for (i = 0; i < 10; i++)
		sum[i] = pow(i, n);
	for (i = x; i < y; i++)
	{
		z = 0;
		c = i;
		for (j = 0; j < n; j++)
		{
			a = n - 1 - j;
			if (c >= 1 && c <= 9)
			{
				num[a] = c;
				z += sum[num[a]];
				break;
			}
			b = c % 10;
			num[a] = b;
			c = c / 10;
			z += sum[num[a]];
		}
		if (i == z)
			cout << i << endl;
	}
	return 0;
}