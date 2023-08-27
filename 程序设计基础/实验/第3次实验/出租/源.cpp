#include <iostream>
using namespace std;
int main()
{
	long long int n,x;
	cin >> n;
	int num[11],arr[10], index[11];
	x = n;
	for (int i = 10; i >=0; i--)
	{
		if (x > 0 &&x < 10)
		{
			num[i] = x;
			break;
		}
		num[i] = x % 10;
		x /= 10;
	}
	int z=0;
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < 11; j++)
		{
			if (num[j] == i)
			{
				arr[z] = i;
				z++;
				break;
			}
		}
	}
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < z; j++)
		{
			if (num[i] == arr[j])
			{
				index[i] = j;
				break;
			}
		}
	}
	cout << "int[] arr = new int[]{";
	for (int i = 0; i < z; i++)
	{
		if (i == z - 1)
			cout << arr[i] << "};" << endl;
		else
			cout << arr[i] << ",";
	}
	cout << "int[] index = new int[]{";
	for (int i = 0; i < 11; i++)
	{
		if (i == 10)
			cout << index[i] << "};";
		else
			cout << index[i] << ",";
	}
	return 0;
}