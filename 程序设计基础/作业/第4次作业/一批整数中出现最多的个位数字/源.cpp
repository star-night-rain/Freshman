#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c;
	cin >> n;
	c = 0;
	int x[1000];
	int y[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i;
	for (i = 0; i < n; i++)
	{
		cin >>x[i];
		if (x[i] == 0)
			y[0]++;
	}
	for (i = 0; i < n; i++)
	{
		b = x[i];
		a = b;
		if (b > 0 && b < 10)
		{
			y[a]++;
		}
		else 
		{
			while (a != 0)
			{
				a = (b % 10);
				y[a]++;
				a = (b / 10);
				c = a;
				if (a > 0 && a < 10)
				{
					y[a]++;
					break;
				}
				while (c != 0)
				{
					a = (c % 10);
					y[a]++;
					a = (c / 10);
					c = a;
					if (a > 0 && a < 10)
					{
						y[a]++;
						break;
					}
				}
				break;

			}
		}
	}
	int max = 1;
	for (i = 0; i < 10; i++)
	{
		if (y[i] > max)
			max = y[i];
	}
	cout << max << ":";
	for (i = 0; i < 10; i++)
	{
		if (y[i] == max)
			cout << " " << i;
	}
	return 0;
}