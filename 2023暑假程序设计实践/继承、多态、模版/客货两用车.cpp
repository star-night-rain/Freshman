#include <iostream>
using namespace std;

class CAR
{
public:
	CAR(double speed);
	virtual ~CAR();
	virtual void Show();
protected:
	double speed;
};

CAR::CAR(double speed)
{
	this->speed = speed;
	cout << "��������(" << speed << "����/Сʱ)" << endl;
}

CAR::~CAR()
{
	cout << "��������(" << speed << "����/Сʱ)" << endl;
}

void CAR::Show()
{
	cout << "����: " << speed << "����/Сʱ" << endl;
}


class BUS :virtual public CAR
{
public:
	BUS(double speed, int seat);
	~BUS();
	void Show();
protected:
	int seat;
};

BUS::BUS(double speed, int seat) :CAR(speed)
{
	this->seat = seat;
	cout << "�����ͳ�(" << seat << "��)" << endl;
}

BUS::~BUS()
{
	cout << "���ٿͳ�(" << seat << "��)" << endl;
}

void BUS::Show()
{
	cout << "�ͳ�: " << speed << "����/Сʱ, " << seat << "��" << endl;;
}


class TRUCK :virtual public CAR
{
public:
	TRUCK(double speed, double loan);
	~TRUCK();
	void Show();
protected:
	double loan;
};

TRUCK::TRUCK(double speed, double loan) :CAR(speed)
{
	this->loan = loan;
	cout << "��������(" << loan << "��)" << endl;
}

TRUCK::~TRUCK()
{
	cout << "���ٻ���(" << loan << "��)" << endl;
}

void TRUCK::Show()
{
	cout << "����: " << speed << "����/Сʱ, " << loan << "��" << endl;
}


class VAN :public BUS, public TRUCK
{
public:
	VAN(double speed, int seat, double loan);
	~VAN();
	void Show();
};

VAN::VAN(double speed, int seat, double loan) :CAR(speed), BUS(speed, seat), TRUCK(speed, loan)
{
	cout << "�����ͻ����ó�" << endl;
}

VAN::~VAN()
{
	cout << "���ٿͻ����ó�" << endl;
}

void VAN::Show()
{
	cout << "�ͻ����ó�: " << speed << "����/Сʱ, " << seat << "��, " << loan << "��" << endl;
}

int main()
{
    CAR* p;
    double s, t, w;
    cin >> s, t, w;
    p = new VAN(s, t, w);
    p->Show();
    delete p;
    return 0;
}