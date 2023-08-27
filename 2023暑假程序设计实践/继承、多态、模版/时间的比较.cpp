#include <iostream>
#include <iomanip>
using namespace std;

class TIME
{
public:
	TIME(int hour = 0, int minute = 0, int second = 0);
	friend ostream& operator<< (ostream& out, const TIME  time);
	friend istream& operator>> (istream& in, TIME& time);
	friend bool operator>(const TIME x, const TIME y);

private:
	int hour;
	int minute;
	int second;
};

TIME::TIME(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

ostream& operator<<(ostream& out, const TIME time)
{
	if (time.hour < 10)
		out << "0";
	out << time.hour << ":";
	if (time.minute < 10)
		out << "0";
	out << time.minute << ":";
	if (time.second < 10)
		out << "0";
	out << time.second;
	return out;
}

istream& operator>>(istream& in, TIME& time)
{
	char c;
	in >> time.hour >> c >> time.minute >> c >> time.second;
	return in;
}

bool operator>(const TIME x, const TIME y)
{
	int time1 = x.hour * 3600 + x.minute * 60 + x.second;
	int time2 = y.hour * 3600 + y.minute * 60 + y.second;
	return time1 > time2;
}

int main()
{
    TIME a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}