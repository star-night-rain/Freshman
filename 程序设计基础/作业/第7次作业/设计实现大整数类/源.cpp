#include <iostream>
#include <string>
using namespace std;

/* 请在这里写出HugeInteger类的定义和实现 */
class HugeInteger
{
public:
	HugeInteger(int x)
	{
		int i;
		for (i = 999;; i--)
		{
			if (x > 0 && x < 10)
			{
				num1[i] = x;
				num2 = i;
				break;
			}
			num1[i] = x % 10;
			x /= 10;
		}
	}
	HugeInteger(const char x[])
	{
		int i;
		for (i = 0;; i++)
		{
			if (x[i] == '\0')
			{
				i--;
				break;
			}
			num1[i] = x[i] - 48;
		}
		int j = 999;
		while (i >= 0)
		{
			num1[j] = num1[i];
			num1[i] = 0;
			i--;
			j--;
		}
		num2 = j + 1;
	}
	HugeInteger()
	{
		num2 = 998;
		num1[999] = 0;
	}
	HugeInteger operator+(const HugeInteger& x)
	{
		HugeInteger y;
		int min = this->num2 < x.num2 ? this->num2 : x.num2;
		int z = 0;
		for (int i = 999; i >= min - 1; i--)
		{
			y.num1[i] = this->num1[i] + x.num1[i] + z;
			if (y.num1[i] >= 10)
			{
				y.num1[i] %= 10;
				z = 1;
			}
			else
				z = 0;
		}
		y.num2 = min - 1;
		return  y;
	}
	HugeInteger operator+(const char x[])
	{
		HugeInteger y(x);
		HugeInteger z;
		z = *this + y;
		return z;
	}
	HugeInteger operator+(int x)
	{
		HugeInteger y(x);
		HugeInteger z;
		z = *this + y;
		return z;
	}
	friend ostream& operator<<(ostream& a, const HugeInteger& x)
	{
		int min = x.num2;
		if (x.num1[min] != 0)
			cout << x.num1[min];
		for (int i = min + 1; i <= 999; i++)
		{
			cout << x.num1[i];
		}
		return a;
	}
private:
	int num1[1000] = { 0 };
	int num2 = 0;
};

int main()
{
    HugeInteger n1(7654321);
    HugeInteger n2(7891234);
    HugeInteger n3("99999999999999999999999999999");
    HugeInteger n4("1");
    HugeInteger n5;
    cout << "n1 is " << n1 << "\nn2 is " << n2
        << "\nn3 is " << n3 << "\nn4 is " << n4
        << "\nn5 is " << n5 << "\n\n";
    n5 = n1 + n2;
    cout << n1 << " + " << n2 << " = " << n5 << "\n\n";
    cout << n3 << " + " << n4 << "\n= " << (n3 + n4) << "\n\n";
    n5 = n1 + 9;
    cout << n1 << " + " << 9 << " = " << n5 << "\n\n";
    n5 = n2 + "10000";
    cout << n2 << " + " << "10000" << " = " << n5 << endl;
    return 0;
}
