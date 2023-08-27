#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    string name;
    int age;
public:
    Teacher(string name, int age);
    string getName() const;
    int getAge() const;
    void setName(string name);
    void setAge(int age);
};

Teacher::Teacher(string x, int y)
{
    name = x;
    age = y;
}

string Teacher::getName()const
{
    return name;
}

int Teacher::getAge()const
{
    return age;
}

void Teacher::setName(string x)
{
    name = x;
}

void Teacher::setAge(int x)
{
    age = x;
}

int main() {
    Teacher a("Wang", 20);
    cout << "name:" << a.getName() << endl;
    cout << "age:" << a.getAge() << endl;
    a.setName("Zhang");
    a.setAge(30);
    cout << "name:" << a.getName() << endl;
    cout << "age:" << a.getAge() << endl;
    return 0;
}
