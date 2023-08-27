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
	cout << "����������(�ٶ�: " << speed << ")" << endl;
}
CRAFT::~CRAFT()
{
	cout << "���ٺ�����(�ٶ�: " << speed << ")" << endl;
}
void CRAFT::Show()
{
	cout << "����(�ٶ�: " << speed << ")" << endl;
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
	cout << "�����ɻ�(��չ: " << width << ")" << endl;
}
PLANE::~PLANE()
{
	cout << "���ٷɻ�(��չ: " << width << ")" << endl;
}
void PLANE::Show()
{
	cout << "����(�ٶ�: " << speed << ", ��չ: " << width << ")" << endl;
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
	cout << "������(��ˮ: " << depth << ")" << endl;
}
SHIP::~SHIP()
{
	cout << "���ٴ�(��ˮ: " << depth << ")" << endl;
}
void SHIP::Show()
{
	cout << "����(�ٶ�: " << speed << ", ��ˮ: " << depth << ")" << endl;
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
	cout << "����ˮ�Ϸɻ�" << endl;
}
SEAPLANE::~SEAPLANE()
{
	cout << "����ˮ�Ϸɻ�" << endl;
}
void SEAPLANE::Show()
{
	cout << "����(�ٶ�: " << speed << ", ��չ: " << width << ", ��ˮ: " << depth << ")" << endl;
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