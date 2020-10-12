#include <iostream>
#include <cmath>

using namespace std;
int main()

 {
	cout << "\nLab2.29\n";
	unsigned int n = 0xFFFFFFFF;
	bool trans = n & 0x80000000;
	n << 1;
	if (trans)
		n |= 1;
	cout << n << endl;
}
