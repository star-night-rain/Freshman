#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int i = 0;
	int num[1000];
	while (i >= 0)
	{
		cin >> num[i];
		if (num[i] < 0)
		{
			i++;
			break;
		}
		i++;
	}
	int j = 0, n3 = 0;
	for (; j < i; j++)
	{
		if (num[j] < 0)
		{
			cout << "Game Over";
			break;
		}
		n3 += 1;
		if (num[j] > n1)
		{
			cout << "Too big" << endl;
		}
		if (num[j] < n1)
		{
			cout << "Too small" << endl;
		}
		if (num[j] == n1)
		{
			if (n3 == 1)
			{
				cout << "Bingo!";
				break;
			}
			if (n3 == 2 || n3 == 3)
			{
				cout << "Lucky You!";
				break;
			}
			if (n3 > 3 && n3 <= n2)
			{
				cout << "Good Guess!";
				break;
			}
			if (n3 > n2)
			{
				cout << "Game Over";
				break;
			}
		}
	}
	return 0;
}