#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	queue<string>names;
	for (int i = 0; i < n; i++)
	{
		string data;
		cin >> data;
		if (data == "in")
		{
			string j;
			cin >> j;
			names.push(j);
		}
		else if (data == "out")
		{
			names.pop();
		}
		else
		{
			if (names.empty())
				cout << "NULL" << endl;
			else
				cout << names.front() << endl;
		}
	}
	return 0;
}