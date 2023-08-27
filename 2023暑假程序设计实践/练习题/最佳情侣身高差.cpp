#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char sex;
	double height;
	vector<double>result;
	for (int i = 0; i < n; i++)
	{
		cin >> sex >> height;
		if (sex == 'M')
			result.push_back(height / 1.09);
		else
			result.push_back(height * 1.09);
	}
	cout << setiosflags(ios::fixed);
	for (int i = 0; i < n; i++)
		cout << setprecision(2) << result[i] << endl;
	return 0;
}