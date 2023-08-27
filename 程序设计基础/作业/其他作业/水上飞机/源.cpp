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
	cout << "�����ɻ�(��չ: " << width << ")" << endl;
}
void PLANE::Show()
{
	cout << "����(�ٶ�: " << speed << ", ��չ: " << width << ")" << endl;
}
PLANE::~PLANE()
{
	cout << "���ٷɻ�(��չ: " << width << ")" << endl;
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

class SEAPLANE :virtual public PLANE, virtual public SHIP
{
public:
	SEAPLANE(double x, double y, double z);
	~SEAPLANE();
	void Show();
};
SEAPLANE::SEAPLANE(double x, double y, double z) :CRAFT(x), PLANE(x, y), SHIP(x, z)
{
	cout << "����ˮ�Ϸɻ�" << endl;
}
SEAPLANE::~SEAPLANE()
{
	cout << "����ˮ�Ϸɻ�" << endl;
}
void SEAPLANE::Show()
{
	cout << "����(�ٶ�: " << speed << ", ��չ: " << width << ", ��ˮ: " << depth << ")" << endl;;
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
