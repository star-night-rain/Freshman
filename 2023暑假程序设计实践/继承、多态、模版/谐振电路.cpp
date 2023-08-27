#include <iostream>
using namespace std;

class RESISTOR
{
public:
    RESISTOR(double resistor);
    ~RESISTOR();
    void Show() const;
private:
    double resistor;
};

class INDUCTOR
{
public:
    INDUCTOR(double inductor);
    ~INDUCTOR();
    void Show() const;
private:
    double inductor;
};

class CAPACITOR
{
public:
    CAPACITOR(double capacitor);
    ~CAPACITOR();
    void Show() const;
private:
    double capacitor;
};

class CIRCUIT
{
public:
    CIRCUIT(double resistor, double inductor, double capacitor);
    ~CIRCUIT();
    void Show() const;
private:
    RESISTOR resistor;
    INDUCTOR inductor;
    CAPACITOR capacitor;
};



RESISTOR::RESISTOR(double resistor)
{
    this->resistor = resistor;
    cout << "��������(" << resistor << "ŷ)" << endl;
}

RESISTOR::~RESISTOR()
{
    cout << "���ٵ���(" << resistor << "ŷ)" << endl;
}

void RESISTOR::Show() const
{
    cout << "����: " << resistor << "ŷ" << endl;
}

INDUCTOR::INDUCTOR(double inductor)
{
    this->inductor = inductor;
    cout << "�������(" << inductor << "��)" << endl;
}

INDUCTOR::~INDUCTOR()
{
    cout << "���ٵ��(" << inductor << "��)" << endl;
}

void INDUCTOR::Show() const
{
    cout << "���: " << inductor << "��" << endl;
}

CAPACITOR::CAPACITOR(double capacitor)
{
    this->capacitor = capacitor;
    cout << "��������(" << capacitor << "��)" << endl;
}

CAPACITOR::~CAPACITOR()
{
    cout << "���ٵ���(" << capacitor << "��)" << endl;
}

void CAPACITOR::Show() const
{
    cout << "����: " << capacitor << "��" << endl;
}

CIRCUIT::CIRCUIT(double resistor, double inductor, double capacitor) :resistor(resistor), inductor(inductor), capacitor(capacitor)
{
    cout << "������·" << endl;
}

CIRCUIT::~CIRCUIT()
{
    cout << "���ٵ�·" << endl;
}

void CIRCUIT::Show() const
{
    resistor.Show();
    inductor.Show();
    capacitor.Show();
}

int main()
{
    double r, i, c;
    cin >> r >> i >> c;
    CIRCUIT x(r, i, c);
    x.Show();
    return 0;
}