#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	string data, min;
	map<string, int>datas;
	while (cin >> data)
	{
		if (data == "\n")
			break;
		datas[data]++;
	}
	min = datas.begin()->first;
	for (auto i = datas.begin(); i != datas.end(); i++)
	{
		if (i->second > datas[min])
			min = i->first;
		else if (i->second == datas[min])
			if (i->first.size() <= min.size())
				if (i->first <= min)
					min = i->first;
	}
	cout << min;
	return 0;
}