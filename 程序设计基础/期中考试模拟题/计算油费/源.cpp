#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char a;
	int n,m;
	cin >> n >> m>>a;
	double b = 0, c=0;
	if (a == 'm')
		b = 0.95;
	else
		b = 0.97;
	cout << setiosflags(ios::fixed);
	switch (m)
	{
	case 90:
		c = n * 6.95 * b;
		break;
	case 93:
		c = n * 7.44 * b;
		break;
	case 97:
		c = n * 7.93 * b;
		break;
	}
	cout << setprecision(2) << c;
	return 0;
}