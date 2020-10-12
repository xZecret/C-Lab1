#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.13\n";
	
	int i;
	//i = (1 || 2) % (1 | 2);
	//printf(" i = % d\n", i);

	cout << "b) \n";
	int  a, b, m, n, z;
	m = n = 5;
	z = a = b = 0;
	z--, (a = b) = z + (m != n);
	printf(" % d % d % d % d % d\n",a, b, m, n, z);

	cout << "c) \n";
	i = 1;
	i = i << i | i;
	printf(" i = % d\n", i);

	double  x = 1.9;
	double  b1 = 3.7;
	//a = b1 += (1 && 2 || 3) != (int)x;
	//printf(" % f % d % f\n", x, a, b1);
	
	cout << "e) \n";
	int x1;
	x1 = 5; ++x1 = 10;
	printf("%d\n", x1);

	cout << "f) \n";
	int i2, x2, y2;  x2 = 5; y2 = 10; i2 = 15;
	x2 = (y2 = 0, i2 = 1);
	printf("%d %d %d\n", i2, x2, y2);
	(x2 = y2 == 0), i2 = 1;
	printf("%d %d %d\n", i2, x2, y2);

	cout << "g) \n";
	int x3, y3;
	x3 = 5; y3 = x && ++x;
	printf("%d %d\n", x3, y3);
	
	cout << "h) \n";
	int x4 = 2, y4, z4;
	x4 *= 3 + 2; x4 *= y4 = z4 = 4;
	printf("%d %d %d\n", x4, y4, z4);
	x4 = y4 == z4; 
	x4 == (y4 = z4);
	printf("%d %d %d\n", x4, y4, z4);

	cout << "i) \n";
	int x5 = 2, y5 = 1, z5 = 0;
	y5 = x5 && y5 || z5;
	x5 = x5 || !y5 && z5;
	z5 = x5 / ++x5;
	printf(" %d %d %d\n", x5, y5, z5);

	cout << "j) \n";
	int x6 = 03, y6 = 02, z6 = 01;
	printf("%d\n", x6 | y6 & -z6);
	printf("%d\n", x6 ^ y6 & -z6);
	printf("%d\n", x6 & y6 && z6);
	printf("%d\n", x6 << 3);

	cout << "k) \n";
	int x7, y7, z7;  x7 = y7 = z7 = 1;
	x7 += y7 += z7;
	printf("%d\n", x7 < y7 ? y7++ : x7++);
	printf("%d\n", z7 += x7 < y7 ? ++x7 : y7--);
	printf("%d %d %d\n", x7, y7, z7);
	printf("%d\n", z7 >= y7 && y7 >= x7);

	cout << "l) \n";
	int x8, y8, z8, i8;  x8 = y8 = z8 = 1;
	i8 = ++x8 || ++y8 && ++z8;
	printf("%d%d%d%d\n", x8, y8, z8, i8);
	i8 = x8++ <= --y8 || ++z8 >= i8;
	printf("%d%d%d%d\n", x8, y8, z8, i8);
}
