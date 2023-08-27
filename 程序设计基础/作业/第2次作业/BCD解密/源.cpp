#include <iostream>
using namespace std;
int main()
{
	int x,y,a,b;
	cin >> x;
	if (x >= 0 && x <= 153)
	{
		a = x / 16;
		b = x % 16;
		y = 10 * a + b;
		cout << y;

	}
	return 0;
}