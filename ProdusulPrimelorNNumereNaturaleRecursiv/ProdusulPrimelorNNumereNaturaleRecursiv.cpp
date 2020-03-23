//44.Scrieti un program care sa calculeze produsul numerelor natural

#include<iostream>
using namespace std;

int Prod(int m) {
	if (m == 2)
		return 1;
	else
		return Prod(m - 1) * m;
}

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	cout << "Produsul primelor " << n << " nr naturale este: " << Prod(n) << endl;
}
