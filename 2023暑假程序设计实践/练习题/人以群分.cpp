#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>people(n);
	for (int i = 0; i < n; i++)
		cin >> people[i];
	sort(people.begin(), people.end());
	int in = accumulate(people.begin(), people.begin() + n / 2, 0);
	int sum = accumulate(people.begin(), people.end(), 0);
	cout << "Outgoing #: " << (n % 2 == 0 ? n / 2 : n / 2 + 1) << endl;
	cout << "Introverted #: " << n / 2 << endl;
	cout << "Diff = " << sum - in - in << endl;
	return 0;
}