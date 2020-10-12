#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.28\n";
	unsigned int n = 0xFFFFFFFF;
	bool trans = n & 1;
	n >> 1;
	if (trans)
		n |= 0x80000000;
	cout << n << endl;
}
