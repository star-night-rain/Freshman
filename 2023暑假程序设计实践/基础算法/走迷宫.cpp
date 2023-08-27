#include <iostream>
using namespace std;
int m, n;
int start_m, start_n;
int end_m, end_n;
char puzzle[101][101];
bool ways(int start_m, int start_n)
{
	if (start_m < 0 || start_m >= m)
		return false;
	if (start_n < 0 || start_n >= n)
		return false;
	if (start_m == end_m && start_n == end_n)
	{
		if (puzzle[start_m][start_n] == 'W')
			return false;
		puzzle[start_m][start_n] = '*';
		return true;
	}
	if (puzzle[start_m][start_n] == 'W')
		return false;
	if (puzzle[start_m][start_n] == '*')
		return false;
	puzzle[start_m][start_n] = '*';
	if (ways(start_m, start_n + 1))
		return true;
	if (ways(start_m + 1, start_n))
		return true;
	if (ways(start_m, start_n - 1))
		return true;
	if (ways(start_m - 1, start_n))
		return true;
	puzzle[start_m][start_n] = 'o';
	return false;
}

int main()
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> puzzle[i][j];
	cin >> start_m >> start_n >> end_m >> end_n;
	if (ways(start_m, start_n))
		for (int i = 0; i < m; i++)
		{
			cout << puzzle[i][0];
			for (int j = 1; j < n; j++)
				cout << " " << puzzle[i][j];
			cout << endl;
		}
	else
		cout << "None" << endl;
	return 0;
}