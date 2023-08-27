#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c, d,x;
	float y;
	cin >> a >> b >> c >> d;
	x = a + b + c + d;
	y = x / 4.0;
	cout << "Sum = " << x << ";";
	cout << setiosflags(ios::fixed);
	cout << setprecision(1) << " Average = " << y;
	return 0;

}