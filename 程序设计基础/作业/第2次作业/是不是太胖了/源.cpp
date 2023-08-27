#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	float a, b;
	cin >> x;
	if (x > 100 && x <= 300)
	{
		a = (x - 100) * 0.9;
		b = 2.0 * a;
		cout << setiosflags(ios::fixed);
		cout<< setprecision(1) << b;
	}
	return 0;
}