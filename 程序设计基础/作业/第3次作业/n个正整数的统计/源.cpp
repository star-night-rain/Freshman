#include <iostream>
#include <iomanip>
#include <algorithm>
#include<cmath>

using namespace std;
int main()
{
	int x, n, a, c, d, e;
	float b, j, k;
	a = 0;
	c = 1;
	n = 0;
	d = 1001;
	e = 0;
	for (; cin >> x; n++)
	{
		if (n > 100 || x == -1)
		{
			j = float(a);
			k = float(n);
			b = j / k;
			cout << setiosflags(ios::fixed);
			cout << "Sum is " << a << endl;
			cout << "Average is " << setprecision(1) << floor((b + 0.05) * 100) / 100 << endl;
			cout << "Product is " << c << endl;
			cout << "Smallest is " << d << endl;
			cout << "Largest is " << e;
			break;
		}
		if (x > 0 && x <= 1000)
		{
			a += x;
			c *= x;
			d = min(d, x);
			e = max(e, x);
		}
	}
	return 0;
}