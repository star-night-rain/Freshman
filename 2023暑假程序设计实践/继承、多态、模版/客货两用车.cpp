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
	cout << "创建汽车(" << speed << "公里/小时)" << endl;
}

CAR::~CAR()
{
	cout << "销毁汽车(" << speed << "公里/小时)" << endl;
}

void CAR::Show()
{
	cout << "汽车: " << speed << "公里/小时" << endl;
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
	cout << "创建客车(" << seat << "人)" << endl;
}

BUS::~BUS()
{
	cout << "销毁客车(" << seat << "人)" << endl;
}

void BUS::Show()
{
	cout << "客车: " << speed << "公里/小时, " << seat << "人" << endl;;
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
	cout << "创建货车(" << loan << "吨)" << endl;
}

TRUCK::~TRUCK()
{
	cout << "销毁货车(" << loan << "吨)" << endl;
}

void TRUCK::Show()
{
	cout << "货车: " << speed << "公里/小时, " << loan << "吨" << endl;
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
	cout << "创建客货两用车" << endl;
}

VAN::~VAN()
{
	cout << "销毁客货两用车" << endl;
}

void VAN::Show()
{
	cout << "客货两用车: " << speed << "公里/小时, " << seat << "人, " << loan << "吨" << endl;
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