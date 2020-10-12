#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.11\n";
	int a, b, c, d;
	a = 10;
	b = 11;
	c = 12;
	d = 13;
	cout << bool(!(a > b) == (a < b)) << endl;
	cout << bool(!(a < 2 || a>5) == (a > 2 && a < 5)) << endl;
	cout << bool((!(2 * a == b + 4)) == (2 * a != b + 4)) << endl;
	cout << bool((!(a < 1 || b < 2 && c < 3)) == (a > 1 && b > 2 || c > 3)) << endl;
	cout << bool((!(a < b&& c < d)) == (a > b || c > d)) << endl;
}
