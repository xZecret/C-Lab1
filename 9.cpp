#include <iostream>
#include <cmath>

using namespace std;

 {
	cout << "\nLab2.9\n";
	bool x = 0;
	cout << bool(!(!x) == x) << endl; // Верно т.к. мы отрицаем отрицание то есть приводим переменную к изначальной форме
	cout << bool(x && true == x) << endl; //Верно по закону конъюнкции (логическое умножение)
}
