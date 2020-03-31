//39.Verififcati daca un numar este par sau impar.
#include<iostream>

using namespace std;


int este_par(int b) {
	if (b % 2 == 0)
		return 1;
	else
		return 0;
}

int main() {
	int a;
	
	cout << "a = ";
	cin >> a;

	if (este_par(a) == 1)
		cout << "Numarul este par";
	else
		cout << "Numarul este impar";
}
