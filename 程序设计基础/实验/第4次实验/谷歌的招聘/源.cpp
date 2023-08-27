#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool prime(int x)
{
	if (x == 1||x==0)
		return false;
	double k = sqrt(double(x));
	for (int i = 2; i <= k; i++)
		if (x % i == 0)
			return false;
	return true;
}
int main()
{
	int n, m;
	int nums[10] = { 0 };
	cin >> n >> m;
	char num[1001];
	cin >> num;
	long long int x;
	int y, z;
	for (int i = 0; i <= n - m; i++)
	{
		x = 0;
		y = 0;
		z = 1;
		for (int j = 0; j < m; j++)
			nums[y++] = num[i + j] - 48;
		for (int j = y - 1; j >= 0; j--)
		{
			x += nums[j] * z;
			z *= 10;
		}
		if (prime(x))
		{
			cout << setfill('0')<<setw(m)<<x;
			return 0;
		}
	}
	cout << "404";
	return 0;
}