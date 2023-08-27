#include <iostream>
using namespace std;
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += factorial(i);
	cout << sum;
	return 0;
}