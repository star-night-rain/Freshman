#include <iostream>
using namespace std;

int main()
{
	int max_A, max_B;
	cin >> max_A >> max_B;
	int n;
	cin >> n;
	int A = 0, B = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (A <= max_A && B <= max_B)
		{
			if (b == a + c && d == a + c)
				continue;
			else if (b == a + c)
				A++;
			else if (d == a + c)
				B++;
			else
				continue;
		}
	}
	if (A > max_A)
	{
		cout << 'A' << endl;
		cout << B;
	}
	else
	{
		cout << 'B' << endl;
		cout << A;
	}
	return 0;
}