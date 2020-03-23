//38.Verificati daca un numar este palindrom.

#include<iostream>

using namespace std;

int main() {
	int n, ogl;
	cout << "n = ";
	cin >> n;
	ogl = 0;

	while (n != 0)
	{
		ogl = ogl * 10 + n % 10;
		n = n / 10;
	}
	cout << "Numarul este palindrom:";
}
