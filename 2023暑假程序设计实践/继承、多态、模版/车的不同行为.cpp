#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual void Run();
	virtual void Stop() {}
};

void Vehicle::Run()
{
	cout << "Vehicle run" << endl;
}


class Bicycle :public Vehicle
{
public:
	void Run();
	void Stop() {}
};
void Bicycle::Run()
{
	cout << "Bicycle run" << endl;
}

class Motorcar :public Vehicle
{
public:
	void Run();
	void Stop() {}
};

void Motorcar::Run()
{
	cout << "Motorcar run" << endl;
}

void run(Vehicle& vehicle)
{
	vehicle.Run();
}


int main(int argc, char const* argv[])
{
    Vehicle veh;
    Bicycle bic;
    Motorcar mot;
    run(veh);
    run(bic);
    run(mot);
    return 0;
}

