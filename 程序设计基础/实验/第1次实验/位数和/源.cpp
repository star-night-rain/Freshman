#include <iostream>
using namespace std;
int main() 
{
	int num,sum=0,a;
	cin >> num;
	while (num!=0)
	{
		a = num % 10;
		sum += a;
		num /= 10;
		
	}
	cout << sum;
	return 0;

}