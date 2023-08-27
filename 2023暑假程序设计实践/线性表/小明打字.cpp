#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, result;
	getline(cin, s);
	int site = 0;
	bool inse = 1;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case '[':
			site = 0;
			break;
		case ']':
			site = result.size();
			break;
		case '{':
			site = max(0, site - 1);
			break;
		case '}':
			site = min(site + 1, static_cast<int>(result.size()));
			break;
		case '-':
			inse ^= 1;
			break;
		case '=':
			result.erase(site = max(0, site - 1), 1);
			break;
		default:
			if (inse)
				result.insert(site, 1, s[i]);
			else
				result[site] = s[i];
			site++;
		}
	}
	cout << result;
	return 0;
}