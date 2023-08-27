#include <iostream>
using namespace std;
int odd_number = 0, even_number = 0;
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		if (j == 0)
		{
			even_number++;
			continue;
		}
		if (j % 2 == 0)
			even_number++;
		else
			odd_number++;
	}
	cout << odd_number << " " << even_number;
	return 0;

}