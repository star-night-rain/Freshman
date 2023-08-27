#include <iostream>
using namespace std;
int main()
{
	int n, d;
	cin >> n;
	struct fri
	{
		char name[11];
		long int bri;
		char num[18];
	}a[11];
	int b[10], c[10];
	int i, j;
	for (i = 0; i < n; i++)
		cin >> a[i].name >> a[i].bri >> a[i].num;
	int x[10], y[10], z[10];
	for (i = 0; i < n; i++)
	{
		x[i] = (a[i].bri / 10000);
		y[i] = ((a[i].bri - x[i] * 10000) / 100);
		z[i] = (a[i].bri % 100);
	}
	for (i = 0; i < n; i++)
	{
		b[i] = x[i] * 365 + y[i] * 30 + z[i];
	}
	for (i = 0; i < (n - 1); i++)
	{
		d = b[i];
		for (j = i + 1; j < n; j++)
		{
			if (b[j] < d)
			{
				a[10] = a[i];
				a[i] = a[j];
				a[j] = a[10];
				d = b[j];
				b[j] = b[i];
				b[i] = d;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i].name << " " << a[i].bri << " " << a[i].num << endl;
	}
	return 0;
}