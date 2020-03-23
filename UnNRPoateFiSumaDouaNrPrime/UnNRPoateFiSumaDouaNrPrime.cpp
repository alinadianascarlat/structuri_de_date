// 43. Verificati daca un numar poate fi scris ca suma de doua numere prime.

#include <iostream>

using namespace std;

void main() {
	int a;
	cout << "a =";
	cin >> a;

	if (a > 2 && a % 2 == 0)
		cout << "Numarul " << a << " poate fi scris ca suma de doua numere prime" << endl;
	else
		cout << "Numarul " << a << " nu poate fi scris ca suma de doua numere prime" << endl;
}
