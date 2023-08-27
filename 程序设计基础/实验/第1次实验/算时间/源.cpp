#include <iostream>
using namespace std;
int main()
{
    long int time, hour, minute, second;

    cin >> time;
    hour = time / 3600;
    minute = (time - hour * 3600) / 60;
    second = (time - hour * 3600) - minute * 60;
    cout << hour << ":" << minute << ":" << second;
    return 0;
}