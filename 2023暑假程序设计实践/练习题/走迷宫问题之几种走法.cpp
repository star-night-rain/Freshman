#include <iostream>
#include <vector>
using namespace std;
int n, m, x, y;
char puzzle[100][100];
int result;
int used[100][100];
void backtracking(int x, int y)
{
	if (x < 0 || x >= n)
		return;
	if (y < 0 || y >= m)
		return;
	if (puzzle[x][y] == 'T')
	{
		result++;
		return;
	}
	if (puzzle[x][y] == '#')
		return;
	if (used[x][y])
		return;
	used[x][y] = 1;
	backtracking(x - 1, y);
	backtracking(x + 1, y);
	backtracking(x, y - 1);
	backtracking(x, y + 1);
	used[x][y] = 0;
}

int main()
{
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> puzzle[i][j];
				if (puzzle[i][j] == 'S')
				{
					x = i;
					y = j;
				}
			}
		result = 0;
		backtracking(x, y);
		if (result == 0)
			cout << "impossible" << endl;
		else
			cout << result << endl;
	}
}