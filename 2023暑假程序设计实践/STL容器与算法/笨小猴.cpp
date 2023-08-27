#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
bool compare(pair<char, int>x, pair<char, int>y)
{
	return x.second < y.second;
}
bool is_prime_number(int x)
{
	if (x < 2)
		return false;
	double k = sqrt(double(x));
	for (int i = 2; i <= k; i++)
		if (x % i == 0)
			return false;
	return true;
}
int main()
{
	string word;
	cin >> word;
	map<char, int>datas;
	for (int i = 0; i < word.size(); i++)
		datas[word[i]]++;
	auto max = max_element(datas.begin(), datas.end(), compare);
	auto min = min_element(datas.begin(), datas.end(), compare);
	int num = max->second - min->second;
	if (is_prime_number(num))
		cout << "Lucky Word" << endl << num;
	else
		cout << "No Answer" << endl << "0";
	return 0;
}