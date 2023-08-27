#include <iostream>
using namespace std;
float& cut(float& a, float& b)
{
    if (a > b)
        return b;
    else
        return a;
}
int main() {
    float a, b;
    cin >> a >> b;
    cut(a, b) = 0;
    cout << "to pay:" << a + b << endl;
    return 0;
}
