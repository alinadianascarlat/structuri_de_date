//44.Scrieti un program care sa calculeze suma primelor n numere naturale recursiv.

#include<iostream>
using namespace std;

int Sum(int m) {
	if (m == 0)
		return 0;
	else
		return Sum(m - 1) + m;
}

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	cout << "Suma primelor nr naturale este: " << Sum(n) << endl;
}

