#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	list<string> data;
	string x, name;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == "in")
		{
			cin >> name;
			data.push_back(name);
		}
		else if (x == "out")
			data.pop_front();
		else if (x == "q")
		{
			if (data.empty())
				cout << "NULL" << endl;
			else
				cout << data.front() << endl;
		}
	}
	return 0;
}