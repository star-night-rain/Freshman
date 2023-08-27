#include <iostream>
using namespace std;

class CRAFT
{
protected:
	double speed;
public:
	CRAFT(double x);
	virtual ~CRAFT();
	virtual void Show();
};
CRAFT::CRAFT(double x)
{
	speed = x;
	cout << "创建航行器(速度: " << speed << ")" << endl;
}
CRAFT::~CRAFT()
{
	cout << "销毁航行器(速度: " << speed << ")" << endl;
}
void CRAFT::Show()
{
	cout << "航行(速度: " << speed << ")" << endl;
}

class PLANE :virtual public CRAFT
{
protected:
	double width;
public:
	PLANE(double x, double y);
	virtual ~PLANE();
	void Show();
};
PLANE::PLANE(double x, double y) :CRAFT(x)
{
	width = y;
	cout << "创建飞机(翼展: " << width << ")" << endl;
}
void PLANE::Show()
{
	cout << "航行(速度: " << speed << ", 翼展: " << width << ")" << endl;
}
PLANE::~PLANE()
{
	cout << "销毁飞机(翼展: " << width << ")" << endl;
}

class SHIP :virtual public CRAFT
{
protected:
	double depth;
public:
	SHIP(double x, double y);
	virtual ~SHIP();
	void Show();
};
SHIP::SHIP(double x, double y) :CRAFT(x)
{
	depth = y;
	cout << "创建船(吃水: " << depth << ")" << endl;
}
SHIP::~SHIP()
{
	cout << "销毁船(吃水: " << depth << ")" << endl;
}
void SHIP::Show()
{
	cout << "航行(速度: " << speed << ", 吃水: " << depth << ")" << endl;
}

class SEAPLANE :virtual public PLANE, virtual public SHIP
{
public:
	SEAPLANE(double x, double y, double z);
	~SEAPLANE();
	void Show();
};
SEAPLANE::SEAPLANE(double x, double y, double z) :CRAFT(x), PLANE(x, y), SHIP(x, z)
{
	cout << "创建水上飞机" << endl;
}
SEAPLANE::~SEAPLANE()
{
	cout << "销毁水上飞机" << endl;
}
void SEAPLANE::Show()
{
	cout << "航行(速度: " << speed << ", 翼展: " << width << ", 吃水: " << depth << ")" << endl;;
}

int main()
{
	double s, w, d;
	CRAFT* p;
	cin >> s >> w >> d;
	p = new SEAPLANE(s, w, d);
	p->Show();
	delete p;
	return 0;
}
