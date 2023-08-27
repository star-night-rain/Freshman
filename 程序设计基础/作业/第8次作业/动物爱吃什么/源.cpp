#include <iostream>
#include <string>
using namespace std;

class animal
{
private:
	int num;
	string name;
public:
	int getnum() { return num; }
	string getname() { return name; }
	animal(int x, string y) { num = x, name = y; }
	virtual string eat() = 0;
};
class Dog :public animal
{
private:
	string food;
public:
	Dog(int x, string y, string z):
		animal(x,y)
	{
		food = z;
	}
	string eat() { return food; }
};
class Cat :public animal
{
private:
	string food;
public:
	string eat() { return food; };
	Cat(int x, string y, string z) :
		animal(x, y)
	{
		food = z;
	}
};

int main()
{
	int n1, n2;
	string m1, m2;
	cin >> n1 >> m1 >> n2 >> m2;
	Dog dog(n1, m1, "ø–π«Õ∑");
	Cat cat(n2, m2, "≥‘–°”„");
	animal* nums[2] = { &dog, &cat };
	for (int i = 0; i < 2; i++)
		cout << nums[i]->getnum() << "∫≈" << nums[i]->getname() << nums[i]->eat() << endl;;
	return 0;
}