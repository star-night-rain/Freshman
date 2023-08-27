#include <iostream>
#include <vector>
using namespace std;
vector<int>path;
int n;
vector<vector<int>>result;
void backtracking(int n, vector<int>used)
{
	if (path.size() == n)
	{
		result.push_back(path);
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (used[i - 1])
			continue;
		used[i - 1] = 1;
		path.push_back(i);
		backtracking(n, used);
		path.pop_back();
		used[i - 1] = 0;
	}
	return;
}

int main()
{
	int n;
	cin >> n;
	vector<int>used(n);
	backtracking(n, used);
	for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < n; j++)
			cout << result[i][j] << " ";
		cout << endl;
	}
	return 0;
}