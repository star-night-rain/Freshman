#include <iostream>
#include <cmath> 
using namespace std;

class shape {// 形状类
public:
    double getArea()  // 求面积
    {
        return -1;
    }
    double getPerimeter() // 求周长
    {
        return -1;
    }
};

class RegularPolygon :public shape
{
public:
    RegularPolygon(double n, double s);
    double getArea();
    double getPerimeter();
private:
    double n;
    double s;
};

RegularPolygon::RegularPolygon(double n, double s)
{
    this->n = n;
    this->s = s;
}

double RegularPolygon::getArea()
{
    return (n * s * s) / (tan(3.1415926 / n) * 4);
}

double RegularPolygon::getPerimeter()
{
    return n * s;
}

int main()
{
    int n;
    double s;

    cin >> n >> s;
    RegularPolygon p(n, s);
    cout << p.getArea() << endl;

    cout << p.getPerimeter() << endl;

    return 0;
}