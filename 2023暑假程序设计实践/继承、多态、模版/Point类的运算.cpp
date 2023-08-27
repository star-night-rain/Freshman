#include <iostream>
using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0);
    Point operator+(const Point point);
    Point operator-(const Point point);
    bool operator==(const Point point);
    void operator+=(const Point point);
    friend ostream& operator<<(ostream& out, const Point point);
private:
    int x;
    int y;
};

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

Point Point::operator+(const Point point)
{
    return Point(x + point.x, y + point.y);
}

bool Point::operator==(const Point point)
{
    return (x == point.x && y == point.y);
}

Point Point::operator-(const Point point)
{
    return Point(x - point.x, y - point.y);
}

void Point::operator+=(const Point point)
{
    x += point.x;
    y += point.y;
}

ostream& operator<<(ostream& out, const Point point)
{
    out << point.x << "," << point.y;
}


int main(int argc, char const* argv[])
{
    Point p1(2, 3);
    cout << p1 << endl;
    Point p2(4, 5);
    cout << p2 << endl;
    Point p3 = p1 + p2;
    cout << p3 << endl;
    p3 = p2 - p1;
    cout << p3 << endl;
    p1 += p2;
    cout << p1 << endl;
    cout << (p1 == p2) << endl;
    return 0;
}
