#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void transform(int& a, string s)
{
	int b = 0;
	int sign = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		char j = s[i];
		if (j >= 48 && j <= 57)
		{
			b += (j - 48) * pow(10, sign);
			sign++;
			continue;
		}
		b = 0;
		break;
	}
	a = b;
}
int main()
{
	string s;
	getline(cin, s);
	auto site = find(s.begin(), s.end(), ' ');
	string a, b;
	a = s.substr(0, site - s.begin());
	b = s.substr((site - s.begin()) + 1, s.end() - site);
	int n = 0, m = 0;
	transform(n, a);
	transform(m, b);
	bool active1 = 1, active2 = 1;
	if (n < 1 || n>1000)
		active1 = 0;
	if (m < 1 || m>1000)
		active2 = 0;
	if (active1 && active2)
		cout << n << " + " << m << " = " << n + m;
	else if (active1 && !active2)
		cout << n << " + " << '?' << " = " << '?';
	else if (!active1 && active2)
		cout << '?' << " + " << m << " = " << '?';
	else
		cout << '?' << " + " << '?' << " = " << '?';
	return 0;
}