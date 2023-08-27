#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int account[100000]={0};
	for (int i = 0; i < n1; i++)
		cin >> account[i];
	int num[100000],x=n2*2;
	for (int i = 0; i < x; i += 2)
		cin >> num[i] >> num[(i + 1)];
	int min,a,b;
	for (int i = 0; i < x; i += 2)
	{
		a = num[i]-1;
		b = num[(i + 1)]-1;
		min = account[a];
		for (int j = a + 1; j<= b; j++)
		{
			if (account[j] < min)
				min = account[j];
		}
		cout << min << endl;
	}
	return 0;
}