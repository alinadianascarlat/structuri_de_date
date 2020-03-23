//42.Scrieti un program care sa returneze un numar inversat.

#include<iostream>

using namespace std;

int n, ogl;
int main() {
	cout << "n =";
	cin >> n;
	ogl = 0;

	while (n != 0) {

		ogl = ogl * 10 + n % 10;
		n = n / 10;
	}
	cout << ogl;
}
