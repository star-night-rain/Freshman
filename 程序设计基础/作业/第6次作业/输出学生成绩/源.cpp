#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float sum, average, max, min;
	sum = 0;
	const int a = n;
	float* num = new float[a];
	float* nu = num;
	for (int i = 0; i < n; i++)
	{
		cin >> *num;
		sum += *num;
		if (i == 0)
		{
			max = *num;
			min = *num;
		}
		if (i > 0)
		{
			if (*num > max)
				max = *num;
			if (*num < min)
				min = *num;
		}
		num++;
	}
	average = sum / n;
	cout << setiosflags(ios::fixed);
	cout << "average = " << setprecision(2) << average << endl;
	cout << "max = " << setprecision(2) << max << endl;
	cout << "min = " << setprecision(2) << min;
	delete[] nu;
	return 0;	
}