#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m;
		map<string, int>datas;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			string x;
			cin >> x;
			datas[x]++;
		}
		for (auto j = datas.begin(); j != datas.end(); j++)
			cout << j->first << " " << j->second << endl;
	}
	return 0;
}