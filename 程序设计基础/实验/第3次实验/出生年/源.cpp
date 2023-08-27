#include <iostream>
using namespace std;
int* nums(int a,int num[])
{
	int x = a;
	for (int i = 3; i >=0; i--)
	{
		if (x > 0 && x < 10)
		{
			num[i] = x;
			break;
		}
		else
		{
			num[i] = x % 10;
			x /= 10;
		}
	}
	return num;
}
int same(int num[])
{
	int x=0;
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 4; j++)
			if (num[i] != num[j])
				x++;
	return x;
}
bool istrue(int n2, int z)
{
	switch (n2)
	{
	case 4:
		if (z == 6)
		{
			return true;

		}
		return false;
	case 3:
		if (z == 5)
			return true;
		return false;
	case 2:
		if (z == 3 || z == 4)
			return true;
		return false;
	}
}
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int num[4] = { 0,0,0,0 };
	int y;
	int* pa;
	int z;
	for (int x = n1;; x++)
	{
		pa = nums(x, num);
		z = same(pa);
		if (istrue(n2, z))
		{
			cout << x - n1 << " ";
			for (int i = 0; i < 4; i++)
				cout << *(pa + i);
			break;
		}
	}
	return 0;
}
