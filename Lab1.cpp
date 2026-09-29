/********************************
* Автор: Горбунов Р.А.          *
* Задание: Линейные алгоритмы   *
* Вариант: 4                    *
********************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {	
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

  k = (y - 1.0) / y;
  n1 = 1.0 - (pow((1.0 / b), k));
  n2 = (T2 - T1) / (T2 + ((T2 - T1) / ((y - 1.0) * (log(a)))));
  n3 = 1.0 - k * ((log(b)) / (pow(b, k) - 1.0));

  cout << "\nCompression efficiency based on two isobars and two adiabats: " << n1
	   << "\nEfficiency of a compression cycle consisting of two isochores and two isotherms: " << n2
	   << "\nCompression efficiency based on the isotherm and the adiabat with the isotherm: " << n3;

  return 0;
}
