#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.27\n";
	unsigned long n, p, x, y, i, m = 0xFFFFFFFF;
	printf("%x\n", m);
	scanf_s("%d%d%x%x", &n, &p, &x, &y);
	printf("X=%x\n", x);
	printf("Y=%x\n", y);
	y = ~y;
	printf("~Y=%x\n", y);
	for (i = n; i; m <<= 1, i--);
	//  printf("%x\n",m);
	for (i = n; i < p; i++) {
		m <<= 1; m += 1;
	}

	y <<= (32 - n);
	x >>= (p - n);
	x |= y;
	x >>= 1;
	//  printf("%x\n",m);
	x &= m;
	printf("X&m=%x\n", x);
}
