#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num[6][6];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> num[i][j];
	int m1, m2, x, y, z = 0;
	for (int i = 0; i < n; i++)
	{
		m1 = num[i][0];
		y = 0;
		for (int j = 1; j < n; j++)
		{
			if (num[i][j] >= m1)
			{
				m1 = num[i][j];
				y = j;
			}
		}
		m2 = num[0][y];
		x = 0;
		for (int j = 1; j < n; j++)
		{
			if (num[j][y] <= m2)
			{
				m2 = num[j][y];
				x = j;
			}
		}
		if (m1 == m2)
		{
			z = 2;
			break;
		}
	}
	if (z == 2)
		cout << x << " " << y;
	else
		cout << "NONE";
	return 0;
}