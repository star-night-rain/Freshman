#include <iostream>
#include <string>
using namespace std;

class Bird
{
public:
    virtual void speak();
};

void Bird::speak()
{
    cout << "Jiu-Jiu-Jiu" << endl;
}

class Duck :public Bird
{
public:
    Duck(string name);
    void printName();
private:
    string name;
};

Duck::Duck(string name)
{
    this->name = name;
}

void Duck::printName()
{
    cout << "Dird Name:" << name << endl;
}



int main()
{
    Bird b;
    b.speak();
    Duck d("Donald"); //�������������
    d.printName();    //���������ʹ�ñ����Ա����
    d.speak();    //���������ʹ�û����Ա����
    return 0;
}