#include <iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;
	struct nums
	{
		long long int num1;
		int num2;
		int num3;
	};
	nums* pa = new nums[1000];
	nums* pb = pa;
	for (int i = 0; i < n; i++)
	{
		cin >> pb->num1 >> pb->num2 >> pb->num3;
		pb++;
	}
	int m;
	cin >> m;
	int find[1000];
	for (int i = 0; i < m; i++)
		cin >> find[i];
	for (int j = 0; j < m; j++)
	{
		pb = pa;
		for (int i = 0; i < n; i++)
		{
			if (find[j] == (pb + i)->num2)
			{
				pb += i;
				cout << pb->num1 << " " << pb->num3 << endl;
				break;
			}
		}
	}
	delete[] pa;
	return 0;
}