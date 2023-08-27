#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	char c;
	string s, result;
	cin >> n >> c;
	getchar();
	getline(cin, s);
	if (s.size() < n)
	{
		int size = n - s.size();
		result.insert(result.begin(), size, c);
		result += s;
		cout << result;
	}
	else
		for (auto i = s.begin(); i != s.end(); i++)
			if (s.end() - i == n)
			{
				for (auto j = i; j != s.end(); j++)
					cout << *j;
				break;
			}
	return 0;
}