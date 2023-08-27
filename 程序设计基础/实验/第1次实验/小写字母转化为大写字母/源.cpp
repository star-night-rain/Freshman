#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
	char a;
	while ((a= getchar()) != '\n')
	{
		if (islower(a))
			a = a - 32;
		cout << a;
	}
	return 0;
}