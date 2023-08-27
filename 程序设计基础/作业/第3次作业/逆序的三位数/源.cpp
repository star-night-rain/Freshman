#include <iostream>
using namespace std;
int main()
{
	int x, a, b, c;
	cin >> x;
	if (x >= 100 && x <1000)
	{
		
		a = x / 100;
		if (x - (a * 100) == 0)
			cout << a;
		else
		{
			b = (x - 100 * a) / 10;
			c = x % 10;

			
			if (b == 0 && c != 0)
				cout << c << b << a;
			else if (c == 0 && b != 0)
				cout << b << a;
			else
				cout << c << b << a;
		}
	}
	return 0;
}