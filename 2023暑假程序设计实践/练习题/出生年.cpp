#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int y, n;
	cin >> y >> n;
	int num = 0;
	while (1)
	{
		string s = to_string(y);
		for (int i = s.size(); i < 4; i++)
			s = "0" + s;
		string result = s;
		sort(s.begin(), s.end());
		s.erase(unique(s.begin(), s.end()), s.end());
		if (s.size() == n)
		{
			cout << num << " " << result << endl;
			break;
		}
		y++;
		num++;
	}
	return 0;
}