#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int x, int y)
{
	return x > y;
}
int main()
{
	string s;
	cin >> s;
	vector<int>arr;
	vector<int>index;
	for (int i = 0; i < 11; i++)
		if (find(arr.begin(), arr.end(), s[i] - 48) == arr.end())
			arr.push_back(s[i] - 48);
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < 11; i++)
	{
		auto site = find(arr.begin(), arr.end(), s[i] - 48);
		index.push_back(site - arr.begin());
	}
	cout << "int[] arr = new int[]{" << arr[0];
	for (int i = 1; i < arr.size(); i++)
		cout << "," << arr[i];
	cout << "};" << endl;
	cout << "int[] index = new int[]{" << index[0];
	for (int i = 1; i < 11; i++)
		cout << "," << index[i];
	cout << "};";
	return 0;
}