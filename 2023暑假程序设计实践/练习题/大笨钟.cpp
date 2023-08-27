#include <iostream>
using namespace std;
int main()
{
	int hour, minute;
	char c;
	cin >> hour >> c >> minute;
	if (hour > 12)
	{
		if (minute > 0)
			for (int i = 0; i < hour - 11; i++)
				cout << "Dang";
		else
			for (int i = 0; i < hour - 12; i++)
				cout << "Dang";
	}
	else if (hour == 12 && minute > 0)
		cout << "Dang";
	else
	{
		cout << "Only ";
		if (hour >= 10)
			cout << hour << c;
		else
			cout << "0" << hour << c;
		if (minute >= 10)
			cout << minute << ".";
		else
			cout << "0" << minute << ".";
		cout << "  Too early to Dang.";
	}
	return 0;
}