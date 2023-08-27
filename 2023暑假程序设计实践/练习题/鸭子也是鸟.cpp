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
    Duck d("Donald"); //定义派生类对象
    d.printName();    //派生类对象使用本类成员函数
    d.speak();    //派生类对象使用基类成员函数
    return 0;
}