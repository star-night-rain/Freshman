#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int mid = s.size() / 2;
	stack<char>frint;
	for (int i = 0; i < mid; i++)
		frint.push(s[i]);
	if (s.size() % 2 == 0)
	{
		for (int i = 0; i < mid; i++)
		{
			if (frint.top() != s[mid + i])
				break;
			frint.pop();
		}
	}
	else
		for (int i = 1; i <= mid; i++)
		{
			if (frint.top() != s[mid + i])
				break;
			frint.pop();
		}
	if (frint.empty())
		cout << "yes";
	else
		cout << "no";
	return 0;
}