
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	list<int>sex;
	list<string>name;
	for (int i = 0; i < n; i++)
	{
		int a;
		string b;
		cin >> a >> b;
		sex.push_back(a);
		name.push_back(b);
	}
	while (!name.empty())
	{
		auto sex_start = sex.begin();
		auto name_start = name.begin();
		auto sex_end = --sex.end();
		auto name_end = --name.end();
		while (1)
		{
			if (*sex_start != *sex_end)
			{
				cout << *name_start << " " << *name_end << endl;
				name.erase(name_start);
				name.erase(name_end);
				sex.erase(sex_start);
				sex.erase(sex_end);
				break;
			}
			if (name.empty())
				break;
			sex_end--;
			name_end--;
		}
	}
	return 0;
}