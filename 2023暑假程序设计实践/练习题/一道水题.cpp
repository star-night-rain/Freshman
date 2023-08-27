#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int a, b, c;
vector<int>state(3), result;
map<vector<int>, int>datas;

void dfs(vector<int>state)
{
	if (datas[state])
		return;
	if (state[0] == 0)
		result.push_back(state[2]);
	datas[state] = 1;
	int x = state[0], y = state[1], z = state[2];
	if (state[1] != b)
	{
		if (state[2] != 0)
		{
			state[2] = max(z - b + y, 0);
			state[1] = min(b, z + y);
			dfs(state);
			state[1] = y, state[2] = z;
		}
		if (state[0] != 0)
		{
			state[0] = max(x - b + y, 0);
			state[1] = min(b, x + y);
			dfs(state);
			state[0] = x, state[1] = y;
		}
	}
	if (state[0] != a)
	{
		if (state[2] != 0)
		{
			state[2] = max(z - a + x, 0);
			state[0] = min(a, z + x);
			dfs(state);
			state[0] = x, state[2] = z;
		}
		if (state[1] != 0)
		{
			state[1] = max(y - a + x, 0);
			state[0] = min(a, y + x);
			dfs(state);
			state[0] = x, state[1] = y;
		}
	}
	if (state[2] != c)
	{
		if (state[0] != 0)
		{
			state[0] = max(x - c + z, 0);
			state[2] = min(c, x + z);
			dfs(state);
			state[0] = x, state[2] = z;
		}
		if (state[1] != 0)
		{
			state[1] = max(y - c + z, 0);
			state[2] = min(c, y + z);
			dfs(state);
			state[1] = y, state[2] = z;
		}
	}
	return;
}

int main()
{
	cin >> a >> b >> c;
	state[0] = 0, state[1] = 0, state[2] = c;
	dfs(state);
	sort(result.begin(), result.end());
	cout << result[0];
	for (int i = 1; i < result.size(); i++)
		cout << " " << result[i];
	return 0;
}