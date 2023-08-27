#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int repeat;
	cin >> repeat;
	const char* week[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	char* a[9];
	for (int i = 0; i < repeat; i++)
	{
		a[i] = new char[1];
		cin >> a[i];
	}
	int x;
	for (int i = 0; i < repeat; i++)
	{
		x = 0;
		for (int j = 0; j < 7; j++)
		{
			if (strcmp(a[i], week[j]) == 0)
			{
				cout << j + 1 << endl;
				break;
			}
			else
				x++;
		}
		if (x == 7)
			cout << "-1" << endl;
	}
	return 0;
	delete[]a;
}