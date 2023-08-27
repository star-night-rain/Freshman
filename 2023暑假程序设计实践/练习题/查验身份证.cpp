#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n;
int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char check[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
bool test(string s)
{
	int num = 0;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num += (s[i] - 48) * weight[i];
			continue;
		}
		return false;
	}
	num %= 11;
	if (check[num] == s.back())
		return true;
	return false;
}
int main()
{
	cin >> n;
	vector<string>datas(n);
	for (int i = 0; i < n; i++)
		cin >> datas[i];
	bool active = 1;
	for (int i = 0; i < n; i++)
	{
		if (test(datas[i]))
			continue;
		active = 0;
		cout << datas[i] << endl;
	}
	if (active)
		cout << "All passed";
	return 0;
}