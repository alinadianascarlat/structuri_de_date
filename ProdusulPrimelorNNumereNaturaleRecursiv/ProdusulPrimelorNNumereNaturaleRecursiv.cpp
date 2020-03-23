//44.Scrieti un program care sa calculeze produsul numerelor natural

#include<iostream>
using namespace std;

int Produs (int m) {
	if (m == 2)
		return 2;
	else
		return m * Produs(m - 1);
}

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	cout << "Produsul primelor nr naturale este: " << Produs(n) << endl;
}
