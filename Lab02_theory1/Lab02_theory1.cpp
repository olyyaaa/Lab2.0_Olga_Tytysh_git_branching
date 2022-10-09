#include <iostream>
using namespace std;
int main()
{
    double a;
    double z1;
    double z2;

    cout << "a = "; cin >> a;
    z1 = ( sin(2*a) + sin(5*a) - sin(3*a) ) / ( cos(a) + 1 - 2*sin(2*a) * sin(2*a) );
    z2 = 2 * sin(a);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}