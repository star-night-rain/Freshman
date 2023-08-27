#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b, c;
	scanf("%d-%d-%d", &a, &b, &c);
	if (a < 10)
	{
		if (b < 10)
			cout << c << "-" << "0" << a << "-" << "0" << b;
		else
			cout << c << "-" << "0" << a << "-" << b;
	}
	else
	{
		if (b < 10)
			cout << c << "-" << a << "-" << "0" << b;
		else
			cout << c << "-" << a << "-" << b;
	}
	return 0;
}