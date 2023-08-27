#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x, y;
	float z,a;
	cin >> x >> y;
	if(x > 0 && x <= 10000)
		if (y >= 1 &&y <= 9)
		{
			a = y * 0.1;
			z = x * a;
			cout << setiosflags(ios::fixed);
			cout <<setprecision(2)<<z;
		}
	return 0;
}