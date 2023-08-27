#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	float f1, f2;
	int z;
	string zf;
	cin >> f1 >> z >> zf >> f2;
	cout << setiosflags(ios::fixed);
	cout << zf << " "
		<< z << " "
		<< setprecision(2) << f1 << " "
		<< setprecision(2) << f2;

	return 0;
}