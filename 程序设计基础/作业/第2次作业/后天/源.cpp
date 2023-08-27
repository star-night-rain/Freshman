#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x;
	if (x >= 1 && x <=7)
	{
		y = x + 2;
		while (y > 7)
		{
			y -= 7;
		}
		cout << y;
	}
	return 0;
}