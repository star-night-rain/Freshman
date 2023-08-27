#include <iostream>
using namespace std;

class CRAFT
{
public:
	CRAFT(double speed);
	virtual ~CRAFT();
	virtual void Show();
protected:
	double speed;
};

CRAFT::CRAFT(double speed)
{
	this->speed = speed;
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
public:
	PLANE(double speed, double width);
	~PLANE();
	void Show();
protected:
	double width;
};

PLANE::PLANE(double speed, double width) :CRAFT(speed)
{
	this->width = width;
	cout << "创建飞机(翼展: " << width << ")" << endl;
}
PLANE::~PLANE()
{
	cout << "销毁飞机(翼展: " << width << ")" << endl;
}
void PLANE::Show()
{
	cout << "航行(速度: " << speed << ", 翼展: " << width << ")" << endl;
}


class SHIP :virtual public CRAFT
{
public:
	SHIP(double speed, double depth);
	~SHIP();
	void Show();
protected:
	double depth;
};

SHIP::SHIP(double speed, double depth) :CRAFT(speed)
{
	this->depth = depth;
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


class SEAPLANE :public PLANE, public SHIP
{
public:
	SEAPLANE(double speed, double width, double depth);
	~SEAPLANE();
	void Show();
};

SEAPLANE::SEAPLANE(double speed, double width, double depth) :CRAFT(speed), PLANE(speed, width), SHIP(speed, depth)
{
	cout << "创建水上飞机" << endl;
}
SEAPLANE::~SEAPLANE()
{
	cout << "销毁水上飞机" << endl;
}
void SEAPLANE::Show()
{
	cout << "航行(速度: " << speed << ", 翼展: " << width << ", 吃水: " << depth << ")" << endl;
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