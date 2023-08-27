#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
int n, k, m;
bool compare(double x, double y)
{
	return x > y;
}
int main()
{
	cin >> n >> k >> m;
	vector<double>grades(n), datas(k);
	for (int i = 0; i < n; i++)
	{
		datas.resize(k);
		for (int j = 0; j < k; j++)
			cin >> datas[j];
		datas.erase(max_element(datas.begin(), datas.end()));
		datas.erase(min_element(datas.begin(), datas.end()));
		grades[i] = accumulate(datas.begin(), datas.end(), 0) / (k - 2.0);
	}
	sort(grades.begin(), grades.end(), compare);
	cout << setiosflags(ios::fixed);
	cout << setprecision(3) << grades[m - 1];
	for (int i = m - 2; i >= 0; i--)
		cout << " " << setprecision(3) << grades[i];
	return 0;
}