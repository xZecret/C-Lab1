#include <iostream>
#include <cmath>

using namespace std;
int main()

 {
	cout << "\nLab2.8\n";
	int i, j, k, m;
	char c, d;
	i = 1;
	j = 2; 
	k = -7; 
	m = 0; 
	c = 'w';
	
	d = 'a' + 1 < c;
	cout << d << endl;
	
	//m = 3 < j < 5;
	//cout << m << endl;

	m = c != 87;
	cout << m << endl;

	m = !c + 87;
	cout << m << endl;

	//k = = j - 9 = = i;

	i += ++j + 3;
	cout << i << endl;

	// 1 + 3 *(n += 7) / 5

	m = -i - 5 * j >= k + 1;
	cout << m << endl;

	//m = 3 = = j < 5;

	m = c = !87;
	cout << m << endl;

	//!m = = c + 87;

	k *= 3 + j;
	cout << k << endl;

	/*k %= m = 1 + n / 2;
	cout << k << endl;*/

	// cout << c + i < c - 'x' + 10 << endl;

	// i + j++ + k = = -2*j;

	// m = = c = 'w';

	// m = !c = 87;

	/*m != c + 87;
	cout << m << endl;*/

	// i + j = !k;

	// 1 + 3 * n += 7 / 5;

	//i - k = = '0' + 9 < 10;
}
