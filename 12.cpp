#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.12\n";
	char c;    short s;       int i;           unsigned u;               signed char sc;
	float f;     double d;    long lng;    unsigned short us;     long double ld;
	cout << typeid(c - s / i).name() << endl;
	cout << typeid(u * 3 - 3.0 * u - i).name() << endl;
	cout << typeid(u - us * i).name() << endl;
	cout << typeid((sc + d) * ld).name() << endl;
	cout << typeid((5 * lng - 'a') *(s + u / 2)).name() << endl;
	cout << typeid((f + 3) / (2.5f - s * 3.14)).name() << endl;
}
