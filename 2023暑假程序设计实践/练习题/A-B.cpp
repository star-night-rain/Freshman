#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	sort(b.begin(), b.begin());
	b.erase(unique(b.begin(), b.end()), b.end());
	for (int i = 0; i < b.size(); i++)
		a.erase(remove(a.begin(), a.end(), b[i]), a.end());
	cout << a;
	return 0;
}