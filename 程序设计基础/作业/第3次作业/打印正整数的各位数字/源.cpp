#include <iostream>
using namespace std;
int main()
{
	long int num;
	cin >> num;
	int n = 1;
	if (num>=0&&num<10)
		cout << num;
	else if (num >= 10 && num <= 100000000)
	{
		
		for (int x = 1; num > 10 * x; n++)
		{
			x*=10;
		}
		n -= 1;
		int a, b;
		
		a = n;
		b = 1;
		while (n != 0)
		{
			while (a != 0)
			{
				b *= 10;
				a--;
			}
			
			cout << (num/b) << "   ";
			num = num - b * (num / b);
			b = 1;
			n--;
			a = n;
			
		}
		cout << (num % 10);

	
	}
	
	return 0;
}