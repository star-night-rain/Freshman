#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n, size;
	cin >> n;
	getchar();
	string s;
	getline(cin, s);
	vector<vector<char>>result;
	vector<char>path;
	if (s.size() % n == 0)
		size = s.size() / n;
	else
		size = s.size() / n + 1;
	for (int i = 0; i < n; i++)
	{
		int start = i;
		while (path.size() != size)
		{
			if (start >= s.size())
				path.push_back(' ');
			else
				path.push_back(s[start]);
			start += n;
		}
		result.push_back(path);
		path.clear();
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = size - 1; j >= 0; j--)
			cout << result[i][j];
		cout << endl;
	}
	return 0;
}