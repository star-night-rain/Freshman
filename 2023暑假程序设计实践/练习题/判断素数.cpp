#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool primer_number(long long int x)
{
	if (x == 1)
		return false;
	double k = sqrt(double(x));
	for (long long int i = 2; i <= k; i++)
		if (x % i == 0)
			return false;
	return true;

}
int main()
{
	int n;
	cin >> n;
	vector<long long int>nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	for (int i = 0; i < n; i++)
	{
		if (primer_number(nums[i]))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}


