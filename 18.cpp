#include <iostream>
#include <cmath>

using namespace std;
int main()

 {
	cout << "\nLab2.18\n";
	int x, k;
	k = 0;
	cin >> x;
	while (x > 0) {
		k += x % 10;
		x /= 10;
	}
	cout << k << endl;
}
