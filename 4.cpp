#include <iostream>
#include <cmath>

using namespace std;
int main()
 {
	cout << "\n Lab 2.4 \n";
	int a, c;
	c = 5;

	c++;
	a = 2 * c; // правильно
	cout << a << endl;

	++c;
	a = c + c; // правильно
	cout << a << endl;

	//a = 2 * c++; 
	//cout << a << endl;

	a = ++c + c; // правильно
	cout << a << endl;

	c += 1;
	a = c + c; // правильно 
	cout << a << endl;

	//a = c += 1 + c;
	//cout << a << endl;

	//a = c++ + c;
	//cout << a << endl;

	a = (c += 1) + c;
	cout << a << endl;
}
