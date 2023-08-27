#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string>names;
	string name;
	while (cin >> name)
	{
		if (name == ".")
			break;
		names.push_back(name);
	}
	int size = names.size();
	if (size >= 14)
		cout << names[1] << " and " << names[13] << " are inviting you to dinner...";
	else if (size >= 2)
		cout << names[1] << " is the only one for you...";
	else
		cout << "Momo... No one is for you ...";
	return 0;
}