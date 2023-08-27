#include <iostream>
#include <string>
using namespace std;


void nums(int x, string y,int a[])
{
	for (int i = 0; i < x; i++)
		a[i] = y[i] - 48;
}

bool judge(int x, int a[], int b[])
{
	for (int i = 0; i < x; i++)
	{
		if (a[i] != b[x - 1 - i])
			return false;
	}
	return true;
}
int main()
{
	int num;
	string x, y;
	cin >> num >> x >> y;
	int a[50] = { 0 }, b[50] = { 0 };
	nums(num, x, a);
	nums(num, y, b);
	if (judge(num, a, b))
	{
		cout << x << " and " << y << " are reverse.";
		return 0;
	}
	else
	{
		cout << x << " and " << y << " are not reverse.";
		return 0;
	}
}