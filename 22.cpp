#include <iostream>
#include <cmath>

using namespace std;
int main()

 {
	cout << "\nLab2.22\n";
	int x, x8, x16, x2, x21, x3, x10, x5, x13,x17, x4, x12, x28;
	cin >> x;
	cout << "a) ";
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x21 = x16 * x4 * x;
	cout << "x21 = " << x21 << endl;
	cout << "b) ";
	x2 = x * x;
	x3 = x2 * x;
	x5 = x3 * x2;
	x10 = x5 * x5;
	cout << "x10 = " << x10 << endl;
	cout << "c) ";
	x2 = x * x;
	x3 = x2 * x;
	x5 = x2 * x3;
	x10 = x5 * x5;
	x13 = x10 * x3;
	cout << "x13 = " << x13 << endl;
	cout << "d) ";
	x2 = x * x;
	x3 = x2 * x;
	x5 = x2 * x3;
	x10 = x5 * x5;
	x17 = x10 * x5 * x2;
	cout << "x17 = " << x17 << endl;
	cout << "e) ";
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x12 = x8 * x4;
	x28 = x12 * x12 * x4;
	cout << "x28 = " << x28 << endl;
}
