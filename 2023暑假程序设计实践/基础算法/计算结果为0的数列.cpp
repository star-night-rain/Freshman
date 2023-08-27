#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

int n;
vector<char>path;
vector<vector<char>>result;
vector<char>sign{' ', '+', '-'};


bool test(vector<char>s)
{
	stack<char>sign;
	stack<int>num;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] > 48 && s[i] <= 57)
			num.push(s[i] - 48);
		else
			sign.push(s[i]);
	}
	int active;
	while (!sign.empty())
	{
		active = 1;
		char symbol = sign.top();
		sign.pop();
		if (!sign.empty())
		{
			char next_sign = sign.top();
			if (next_sign == ' ')
				active = 0;
		}
		int x = num.top();
		num.pop();
		int y = num.top();
		num.pop();
		if (symbol == '+' && active)
		{
			num.push(x + y);
		}
		else if (symbol == '-' && active)
		{
			num.push(x - y);
		}
		else if (symbol == ' ')
		{
			num.push(x * pow(10, 1) + y);

		}
		else
		{
			int z = num.top();
			num.pop();
			num.push(y * pow(10, 1) + z);
			num.push(x);
			sign.pop();
			sign.push(symbol);

		}
	}
	if (num.top() == 0)
		return true;
	else
		return false;
}

void backtracking(int startindex, int used[10][3])
{
	path.push_back(startindex + 48);
	if (startindex != n)
		for (int j = 0; j < 3; j++)
		{
			if (used[startindex][j])
				continue;
			used[startindex][j] = 1;
			path.push_back(sign[j]);
			backtracking(startindex + 1, used);
			used[startindex][j] = 0;
			path.pop_back();
		}
	if (path.size() == 2 * n - 1)
	{
		if (test(path))
			result.push_back(path);
	}
	path.pop_back();
	return;
}


int main()
{
	cin >> n;
	int used[10][3] = { 0 };
	int startindex = 1;
	backtracking(startindex, used);
	for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
			cout << result[i][j];
		cout << endl;
	}
	return 0;
}