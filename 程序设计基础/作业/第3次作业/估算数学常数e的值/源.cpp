#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double n,i,x,y;
	i = 1.0;
	x = 1.0;
	double e;
	e = 1.0;
	cin >> n;
	y = (pow(10, n));
	if (n >= 3 && n <= 10)
	{
		for (;x<y;i++)
		{
			x *= i;
			e += (1 / x);
		}
		
		cout << setiosflags(ios::fixed);
		cout <<setprecision((n+1))<< e;
		
	}
	return 0;
}