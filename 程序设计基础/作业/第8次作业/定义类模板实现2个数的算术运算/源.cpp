#include <iostream>
using namespace std;
template<class T>
class nums
{
private:
	T x;
	T y;
public:
	nums(T a, T b)
	{
		x = a;
		y = b;
	}
	void ope()
	{
		cout << (x > y ? x : y) << " " << (x < y ? x : y) << " ";
		cout<< x + y << " " << x - y << " "; 
		cout<< x * y << " " << x / y << endl;
	}
};

int main()
{
	int n1, n2;
	float m1, m2;
	cin >> n1 >> n2 >> m1 >> m2;
	nums<int>a(n1, n2);
	nums<float>b(m1, m2);
	a.ope();
	b.ope();
	return 0;
}
