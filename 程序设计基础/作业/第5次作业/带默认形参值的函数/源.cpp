#include <iostream>
using namespace std;
int add(int a, int b=20, int c=30)
{
    int x = a + b + c;
    return x;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << add(a) << endl;
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;
    return 0;
}
