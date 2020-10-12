#include <iostream>
#include <cmath>

using namespace std;
int main()

 {
	// Lab 2.3
	cout << "\n Lab 2.3 \n";
	int a, b, c, d, e;
	a = 2;  b = 13;  c = 7;  d = 19;  e = -4;
	cout << b / a / c << endl; // 0
	cout << b % e << endl; // 1
	cout << d / a % c << endl; // 2
	cout << 7 - d % +(3 - a) << endl; // 7
	cout << c % d - e << endl; // 11
	cout << b % -e * c << endl; // 7
	cout << -e % a + b / a * -5 + 5 << endl; // -25
	cout << 9 / c - -20 / d << endl; // 2
}
