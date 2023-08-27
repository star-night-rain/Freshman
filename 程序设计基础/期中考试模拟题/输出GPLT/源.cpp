#include <iostream>
using namespace std;
int main()
{
	char a[10001];
	cin >> a;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'g' || a[i] == 'G')
		{
			n1++;
			continue;
		}
		else if (a[i] == 'p' || a[i] == 'P')
		{
			n2++;
			continue;
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			n3++;
			continue;
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			n4++;
			continue;
		}
		else
			continue;
	}
	while (1)
	{
		if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 0)
			break;
		if (n1 == 0)
		{ }
		else
		{
			cout << "G";
			n1--;
		}
		if (n2 == 0)
		{}
		else
		{
			cout << "P";
			n2--;
		}
		if (n3 == 0)
		{}
		else
		{
			cout << "L";
			n3--;
		}
		if (n4 == 0)
		{}
		else
		{
			cout << "T";
			n4--;
		}
	}
	return 0;
}