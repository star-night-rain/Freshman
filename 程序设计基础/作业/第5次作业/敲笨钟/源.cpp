#include <iostream>
using namespace std;
void swap(char a[], int q, int j)
{
	int x = 0;
	for (int i = q; i <= j; i++)
	{
		if (a[i] == ',')
		{
			if ((a[i - 3] == 'o' && a[i - 2] == 'n') && a[i - 1] == 'g')
				x++;
		}
		else if (a[i] == '.')
		{
			if ((a[i - 3] == 'o' && a[i - 2] == 'n') && a[i - 1] == 'g')
			{
				x++;
				break;
			}
		}
	}
	if (x == 2)
	{
		int z = 0;
		int y;
		for (y = j; z != 3; y--)
		{
			if (a[y] == ' ')
				z++;
		}
		for (int i = q; i <= (y + 1); i++)
			cout << a[i];
		cout << "qiao ben zhong." << endl;
	}
	else
		cout << "Skipped" << endl;
}
int main()
{
	int n, num[21] = { 1 };
	cin >> n;
	char a[2001];
	int j, b = 0, c = 1;
	for (j = 0; j < 2001; j++)
	{
		a[j] = getchar();
		if (a[j] == '.')
		{
			b++;
			num[c] = j;
			c++;
		}
		if (b == n)
			break;
	}
	for (int i = 1; i < c; i++)
	{
		swap(a, num[i - 1], num[i]);
		num[i] += 2;
	}
	return 0;
}
