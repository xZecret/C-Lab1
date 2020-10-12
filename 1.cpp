#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	cout << "Tharkhahov Adam VPI - 22" << endl;

	//Lab 2.1
	cout << "\n Lab 2.1 \n";
	cout << 123 << endl; // Integer
	// cout << ‘0’ << endl; // Error
	cout << 00123 << endl; // Octal number
	// cout << 'a'U << endl; // Error unknown operator
	// cout << 1E6 << endl; // Hexadecimal number (type == double)
	// cout << 058 << endl; // The number goes beyond the category
	cout << 0xffffffL << endl; // Hexadecimal number
	cout << 0731UL << endl; //ulong
	cout << 123456789LU << endl; // unsigned long 
	// cout << '\x7' << endl; // Error
	// cout << 01A << endl; // Error unknown literal
	// cout << ‘\n’ << endl; // Error
	cout << -5 << endl; // int
	// cout << 0X - 1AD << endl; // Error unknown literal
	// cout << -‘x’ << endl; // Error
	cout << +0xaf << endl; // ASCII
	cout << 0XFUL << endl; // unsigned long Hexadecimal number 
	// cout << ‘\122’ << endl; // Error
	//cout << "x" << endl; // string
	cout << 0X0 << endl; // unsigned long
}
