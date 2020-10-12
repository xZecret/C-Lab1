#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.7\n";
	int a, b, c;
	a = 2;
	b = 6;
	c = 3;
    
	 cout << - - - a << endl;

	// cout << -- - a << endl; // Неверно

	cout << b-- - a << endl;

	a += a++;
	cout << a << endl;
	
	a = 2;
	b = 6;
	cout << ++b / a++ * --c << endl;

	cout << a --- b << endl;

	a = 2;
	b = 6;
	cout << -a-- - b << endl;

	//a++ = b //Неверно

	a = 2;
	b = 6;
	a = a++;
	cout << a << endl;

	a = 2;
	b = 6;
	c = 3;
	cout << b++ / ++a * c-- << endl;

	a = 2;
	b = 6;
	c = 3;
	cout << - --a << endl;

	a = 2;
	cout << a - --c << endl;

	a = 2;
	c = 3;
	//a++ = a //Неверно

	++a = b;
	cout << a << endl;

	
	//a = (b + 1)++ //Неверно
}
