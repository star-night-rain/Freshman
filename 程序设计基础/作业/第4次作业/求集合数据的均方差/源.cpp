#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	long int n,i;
	cin>> n;
	double avg = 0.0;
	long double nums[10000];
	for (i = 0; i < n; i++)
	{
		cin >> nums[i];
		avg += nums[i];
	}
	avg /= n;
	long double s=0.0;
	for (i = 0; i < n; i++)
	{
		s = s+(pow((nums[i] - avg), 2));
	}
	s /= n;
	s = (pow(s, 0.5));
	cout << setiosflags(ios::fixed);
	cout << setprecision(5) << s;
	return 0;
}