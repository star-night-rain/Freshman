#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num[11] = { 0,1,1 };
	int i, j, x, y, z;
	x = 2 + n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j > 1)
			{
				printf("%4d", num[j]);
				continue;
			}
			cout << setw(x) << " " << num[j];
		}
		cout << endl;
		x--;
		if (i == 1)
			continue;
		y = 1;
		for (j = 2; j <= i; j++)
		{
			z = num[j];
			num[j] = y + num[j];
			y = z;
		}
		num[i + 1] = 1;
	}
	return 0;
}