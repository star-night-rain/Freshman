#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n, num = 0;
	string name;
	vector<string>names;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		names.clear();
		num++;
		for (int i = 0; i < n; i++)
		{
			cin >> name;
			names.push_back(name);
		}
		cout << "SET" << " " << num << endl;
		for (unsigned int i = 0; i < names.size(); i += 2)
			cout << names[i] << endl;
		reverse(names.begin(), names.end());
		if (n % 2 != 0)
		{
			for (unsigned int i = 1; i < names.size(); i += 2)
				cout << names[i] << endl;
		}
		else
			for (unsigned int i = 0; i < names.size(); i += 2)
				cout << names[i] << endl;
	}
	return 0;
}