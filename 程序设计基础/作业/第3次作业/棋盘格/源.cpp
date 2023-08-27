#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x > 0 && x < 20)
	{
		for (int a = 1; a <= x; )
		{
			for (int b = 1; b <= x; b++)
			{
				if (b == x)
					cout << "*";
				else
					cout << "*" << " ";
			}
			if (a % 2 != 0)
				cout << " ";
			a++;
			cout << endl;
			if ((a%2)==0)
					cout << " ";
			
		}
	}
	return 0;
}