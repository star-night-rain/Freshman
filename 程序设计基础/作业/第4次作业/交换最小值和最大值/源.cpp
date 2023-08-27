#include <iostream>
using namespace std;
int main()
{
	int n, max, min, i, x, y;
	cin >> n;
	int num[10];
	if (n > 0 && n <= 10)
	{
		for (i = 0; i < n; i++)
			cin >> num[i];
		max = num[0];
		min = num[0];
		for (i = 0; i < n; i++)
		{
			if (num[i] <= min)
			{
				min = num[i];
				x = i;
			}
		}
		num[x] = num[0];
		num[0] = min;
		for (i = 0; i < n; i++)
		{
			if (num[i] >= max)
			{
				max = num[i];
				y = i;
			}
		}
		num[y] = num[(n - 1)];
		num[(n - 1)] = max;
		for (i = 0; i < n; i++)
			cout << num[i] << " ";
	}
	return 0;
}