#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.26\n";
	unsigned n = 0xFFFFFFFF;
	char c[4];
	for (int i = 0; i < 4; i++)
		c[i] = ((n >> 8 * i) & 255);
}
