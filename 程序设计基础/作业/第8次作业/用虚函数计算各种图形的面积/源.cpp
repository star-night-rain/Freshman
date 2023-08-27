#include <iostream>
#include <iomanip>
#define pi 3.14159f
using namespace std;

class Shape
{
public:
	virtual float area() = 0;
};
class Circle :public Shape
{
private:
	float r;
public:
	Circle(float x) { r = x; }
	float area(){return r * r * pi;}
};
class Square :public Shape
{
private:
	float length;
public:
	Square(float x) { length = x; }
	float area(){return length*length;}
};
class Rectangle :public Shape
{
private:
	float width;
	float length;
public:
	Rectangle(float x, float y) { width = x; length = y; }
	float area() { return length * width; }
};
class Trapezoid :public Shape
{
private:
	float upper;
	float lower;
	float height;
public:
	Trapezoid(float x, float y, float z) { upper = x; lower = y; height = z; }
	float area() { return ((upper + lower) * height) / 2; }
};
class Triangle :public Shape
{
private:
	float bottom;
	float height;
public:
	Triangle(float x, float y) { bottom = x; height = y; }
	float area() { return (bottom * height) / 2; }
};

int main()
{
	float num[9];
	for (int i = 0; i < 9; i++)
		cin >> num[i];
	Circle a(num[0]);
	Square b(num[1]);
	Rectangle c(num[2], num[3]);
	Trapezoid d(num[4], num[5], num[6]);
	Triangle e(num[7], num[8]);
	Shape* nums[5] = { &a,&b,&c,&d,&e };
	float sum = 0;
	for (int i = 0; i < 5; i++)
		sum += nums[i]->area();
	cout << setiosflags(ios::fixed);
	cout << setprecision(3) << sum<<endl;
	return 0;
}