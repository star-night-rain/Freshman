#include <iostream>
using namespace std;
int main()
{
	char a;
	int num;
	cin >> num>>a;
	int n, m;
	double x;
	x = double(num) / 2;
	if (x - (num / 2) >= 0.5)
		n = num / 2 + 1;
	else
		n = num / 2;
	m = num;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a;
		cout << endl;
	}
	return 0;
}