#include<iostream>
#include<string>
using namespace std;

class Fruit
{
protected:
    int weight;
public:
    Fruit(int x);
    virtual ~Fruit();
    virtual void display();
};

class Banana :public Fruit
{
private:
    string origin;
public:
    Banana(string y,int x);
     ~Banana();
     void display();
};

Fruit::Fruit(int x)
{
    weight = x;
    cout << "Fruit Constructor" << endl;
}

Fruit::~Fruit()
{
    cout << "Fruit Destructor" << endl;
}

void Fruit::display()
{
    cout << "weight=" << weight << endl;
}

Banana::Banana(string x,int y ):Fruit(y)
{
    origin = x;
    cout << "Banana Constructor" << endl;
}

Banana::~Banana()
{
    cout << "Banana Destructor" << endl;
}

void Banana::display()
{
    cout << "origin=" << origin << ",weight=" << weight << endl;
}

int main() {
    Fruit* pf = new Banana("Chongqing", 10);
    pf->display();
    delete pf;
    return 0;
}
