#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin >> x;
	y = 1;
	if (x >= 0 && x <= 10)
	{
		z = x;

		while (z != 0)
		{
			y *= 2;
			--z;
		}
		cout << "2^" << x << " = " << y;
	}
	return 0;
}