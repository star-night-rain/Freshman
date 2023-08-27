#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int digits;
	int multiple = 100;
	if (num[0] == '-')
	{
		multiple *= 1.5;
		digits = num.length() - 1;
	}
	else
		digits = num.length();
	int end = num.back() - 48;
	if (end % 2 == 0)
		multiple *= 2;
	double time = count(num.begin(), num.end(), '2');
	double result = time / digits;
	result *= multiple;
	cout << setiosflags(ios::fixed);
	cout << setprecision(2) << result << "%";
	return 0;

}