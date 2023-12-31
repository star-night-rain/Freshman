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
    cout << "创建电阻(" << resistor << "欧)" << endl;
}

RESISTOR::~RESISTOR()
{
    cout << "销毁电阻(" << resistor << "欧)" << endl;
}

void RESISTOR::Show() const
{
    cout << "电阻: " << resistor << "欧" << endl;
}

INDUCTOR::INDUCTOR(double inductor)
{
    this->inductor = inductor;
    cout << "创建电感(" << inductor << "亨)" << endl;
}

INDUCTOR::~INDUCTOR()
{
    cout << "销毁电感(" << inductor << "亨)" << endl;
}

void INDUCTOR::Show() const
{
    cout << "电感: " << inductor << "亨" << endl;
}

CAPACITOR::CAPACITOR(double capacitor)
{
    this->capacitor = capacitor;
    cout << "创建电容(" << capacitor << "法)" << endl;
}

CAPACITOR::~CAPACITOR()
{
    cout << "销毁电容(" << capacitor << "法)" << endl;
}

void CAPACITOR::Show() const
{
    cout << "电容: " << capacitor << "法" << endl;
}

CIRCUIT::CIRCUIT(double resistor, double inductor, double capacitor) :resistor(resistor), inductor(inductor), capacitor(capacitor)
{
    cout << "创建电路" << endl;
}

CIRCUIT::~CIRCUIT()
{
    cout << "销毁电路" << endl;
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