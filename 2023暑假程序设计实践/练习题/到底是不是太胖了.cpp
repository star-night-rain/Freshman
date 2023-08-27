#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void test(double height, double weight)
{
	double standard = (height - 100) * 0.9;
	double error = fabs(weight - standard);
	if (error < standard / 10)
	{
		cout << "You are wan mei!" << endl;
		return;
	}
	if (weight - standard > 0)
	{
		cout << "You are tai pang le!" << endl;
		return;
	}
	else
	{
		cout << "You are tai shou le!" << endl;
		return;
	}
}
int main()
{
	int n;
	cin >> n;
	vector<vector<double>>datas(n);
	vector<double>data(2);
	for (int i = 0; i < n; i++)
	{
		cin >> data[0] >> data[1];
		data[1] /= 2;
		datas[i] = data;
	}
	for (int i = 0; i < n; i++)
		test(datas[i][0], datas[i][1]);
	return 0;
}