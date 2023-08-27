#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num[100][100];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> num[i][j];
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			cout << num[i][i] << endl;
		else
			cout << num[i][i] << " ";
	}
	for (int i = n-1; i>=0; i--)
	{
		if (i == 0)
			cout << num[i][n-1];
		else
			cout << num[i][n - 1 - i] << " ";
	}
	return 0;
}