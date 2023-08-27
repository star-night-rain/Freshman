#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n % 2) == 0 && n <= 50)
	{
		struct std
		{
			int sex;
			string name;
		}a[50];
		int i, j;
		for (i = 0; i < n; i++)
		{
			cin >> a[i].sex >> a[i].name;
		}
		for (i = 0; i < (n / 2); i++)
		{
			for (j = n - 1; j > i; j--)
			{
				if (a[i].sex != a[j].sex && a[j].name != "\0")
				{
					cout << a[i].name << " " << a[j].name << endl;
					a[j].name = "\0";
					break;
				}
			}
		}
	}
	return 0;
}