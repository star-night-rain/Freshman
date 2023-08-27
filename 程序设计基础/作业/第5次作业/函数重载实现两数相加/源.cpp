#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int add(int x, int y)
{
    int z = x + y;
    return z;
}
double add(double x, double y)
{
    double z = x + y;
    return z;
}
string add(string x, string y)
{
    string z = x + y;
    return z;
}
int main()
{
    int a, b;
    double c, d;
    string s1, s2;
    cin >> a >> b;
    cin >> c >> d;
    cin >> s1 >> s2;
    cout << add(a, b) << endl;
    cout << fixed << setprecision(2) << add(c, d) << endl;
    cout << add(s1, s2) << endl;
    return 0;
}
