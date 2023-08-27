#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	int m1[20], m2[20];
	int i;
	cin >> n1;
	for (i = 0; i < n1; i++)
		cin >> m1[i];
	cin >> n2;
	for (i = 0; i < n2; i++)
		cin >> m2[i];
	int num[20] = { 0 };
	int j, g;
	g = 0;
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (m1[i] == m2[j])
			{
				num[g] = m1[i];
				g++;
				break;
			}
		}
	}
	int h = g;
	int n3 = 0, n4 = 0;
	int c[40] = { 0 };
	int d = 0;
	int s;
	for (i = 0; i < n1; i++)
	{
		for (g = 0; g < h; g++)
		{
			if (m1[i] != num[g])
				n3++;
		}
		if (n3 == h)
		{
			c[d] = m1[i];
			d++;
		}
		n3 = 0;

	}
	for (i = 0; i < n2; i++)
	{
		for (g = 0; g < h; g++)
		{
			if (m2[i] != num[g])
				n4++;
		}
		if (n4 == h)
		{
			c[d] = m2[i];
			d++;
		}
		n4 = 0;
	}

	cout << c[0];
	for (i = 1; i < d; i++)
	{
		s = 0;
		for (j = 0; j < i; j++)
		{
			if (c[i] == c[j])
			{
				s = 1;
				break;
			}
		}
		if (s == 1)
			continue;
		cout << " " << c[i];
	}
	return 0;
}