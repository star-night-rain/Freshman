#include <iostream>
using namespace std;
int main()
{
	double n;
	char c;
	cin >> n >> c;
	int length = n;
	int width = int(n / 2 + 0.5);
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
			cout << c;
		cout << endl;
	}
	return 0;
}