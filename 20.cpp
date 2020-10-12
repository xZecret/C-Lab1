#include <iostream>
#include <cmath>

using namespace std;
int main()

 {
	cout << "\nLab2.20\n";
	int x,newint,i;
	newint = 0;
	cin >> x;
	for (i = 2; i >= 0; i--) {
		newint += (x % 10) * pow(10, i);
		x /= 10;
	}
	cout << newint << endl;
}
