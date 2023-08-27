#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>ls(n);
	for (int i = 0; i < n; i++)
		cin >> ls[i];
	vector<int>dp(n, 1);
	int result = 1;
	for (int i = 1; i < ls.size(); i++)
	{
		for (int j = 0; j < i; j++)
			if (ls[i] > ls[j])
				dp[i] = max(dp[i], dp[j] + 1);
		if (dp[i] > result)
			result = dp[i];
	}
	cout << result;
}