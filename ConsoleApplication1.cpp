/*************************
* Автор: Горбунов Р.А. *
* Вариант: 4 *
* Название: Линейные алгоритмы *
*************************/

#include <iostream>
using namespace std;

int main()
{
	double y, a, b, T1, T2, k, n1, n2, n3;

	cout << "Degree of volume reduction: ";
	cin >> a;

	cout << "Gas compression ratio: ";
	cin >> b;

	cout << "Adiabatic index: ";
	cin >> y;

	cout << "Process temperature(1): ";
	cin >> T1;
	
	cout << "Process temperature(2): ";
	cin >> T2;

	k = (y - 1) / y;
	n1 = 1 - (pow((1 / b), k));
	n2 = (T2 - T1) / (T2 + ((T2 - T1) / ((y - 1) * (std::log(a)))));
	n3 = 1 - k * ((std::log(b)) / (pow(b, k) - 1));

	cout << n1 << endl
		<< n2 << endl
		<< n3 << endl;

	return 0;
}