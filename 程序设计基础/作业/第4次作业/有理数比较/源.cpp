#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a, b, c, d;
	scanf("%d/%d %d/%d", &a, &b, &c, &d);
	double x, y;
	x = (a / (b * 1.0));
	y = (c / (d * 1.0));
	if (x > y)
		cout << a << "/" << b << " > " << c << "/" << d;
	else if (x < y)
		cout << a << "/" << b << " < " << c << "/" << d;
	else
		cout << a << "/" << b << " = " << c << "/" << d;
	return 0;
}