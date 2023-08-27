#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int datas[4] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'g' || s[i] == 'G')
			datas[0]++;
		else if (s[i] == 'p' || s[i] == 'P')
			datas[1]++;
		else if (s[i] == 'l' || s[i] == 'L')
			datas[2]++;
		else if (s[i] == 't' || s[i] == 'T')
			datas[3]++;
		else
			continue;
	}
	int active = 4;
	char sign[4] = { 'G','P','L','T' };
	while (active)
	{
		active = 4;
		for (int i = 0; i < 4; i++)
		{
			if (datas[i])
			{
				cout << sign[i];
				datas[i]--;
				continue;
			}
			active--;
		}
	}
	return 0;
}