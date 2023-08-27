#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	vector<int>num(n1, 0);
	for (int i = 0; i < n1; i++)
		cin >> num[i];
	if (2 * n2 >= n1)
	{
		for (int i = 0; i < n1 - 1; i++)
			cout << num[i] << " ";
		cout << num[n1 - 1];
	}
	else
	{
		int x = n1 - n2 - 1, y, z;
		while (x)
		{
			y = x;
			x = 0;
			for (int i = n2; i < y; i++)
			{
				if (num[i] > num[i + 1])
				{
					z = num[i];
					num[i] = num[i + 1];
					num[i + 1] = z;
					x = i;
				}
			}
		}
		for (int i = 0; i < n1 - 1; i++)
			cout << num[i] << " ";
		cout << num[n1 - 1];
	}
	return 0;
}