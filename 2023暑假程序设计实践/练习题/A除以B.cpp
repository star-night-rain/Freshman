#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << setiosflags(ios::fixed);
	if (b == 0)
		cout << a << '/' << b << '=' << "Error";
	else if (b > 0)
		cout << a << '/' << b << '=' << setprecision(2) << double(a) / b;
	else
		cout << a << '/' << '(' << b << ")=" << setprecision(2) << double(a) / b;
	return 0;
}