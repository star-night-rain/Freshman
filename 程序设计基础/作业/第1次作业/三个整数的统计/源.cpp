#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	int x, y, z, a, c, d, e;
	float b;
	cin >> x >> y >> z;
	if (x > 0 && x <= 1000)
		if (y > 0 && y <= 1000)
			if (z > 0 && z <= 1000)
			{
				a = x + y + z;
				b = a / 3.0;
				c = x * y * z;
				d = min(min(x, y), z);
				e = max(max(x, y), z);
				cout << setiosflags(ios::fixed);
				cout << "Sum is " << a << endl;
				cout << "Average is " << setprecision(1) << b << endl;
				cout << "Product is " << c << endl;
				cout << "Smallest is " << d << endl;
				cout << "Largest is " << e << endl;
			}
	return 0;
}