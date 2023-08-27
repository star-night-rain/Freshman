#include<iostream>
using namespace std;
class Pig
{
public:
	Pig();
	virtual void climb();
	virtual ~Pig();
};
Pig::Pig()
{
	cout << "Pig �����˿ռ�..." << endl;
}
void Pig::climb()
{
	cout << "��ֻ�Ǹ�ƽ��������" << endl;
}
Pig::~Pig()
{
	cout << "Pig �ͷ��˿ռ�..." << endl;
}
class MagicPig :public Pig
{
public:
	MagicPig();
	~MagicPig();
	void climb();
};
MagicPig::MagicPig()
{
	cout << "MagicPig �����˿ռ�..." << endl;
}
MagicPig::~MagicPig()
{
	cout << "MagicPig �ͷ��˿ռ�..." << endl;
}
void MagicPig::climb()
{
	cout << "����������Ү��" << endl;
}

int main()
{
    Pig* p1 = new Pig;
    Pig* p2 = new MagicPig;
    cout << endl;

    p1->climb();
    p2->climb();
    cout << endl;

    delete p1;
    delete p2;
    return 0;
}
