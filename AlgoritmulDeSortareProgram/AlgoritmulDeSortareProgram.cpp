#include<iostream>
using namespace std;


int main() {

	bool swap = false;
	int totalNr = 20;
	int x[] = { 4, 78,  13,   45,  2, 90,  66,  34,  21,  32,  10,  7,  5,  102,  56,  11,  19,  23,75,  88 };
	
	cout << "Afiseaza numerele initiale:" << endl;
	for (int i = 0; i < totalNr; i++) {
		cout << x[i] << " ";
	}
	cout << "Array is:" << endl;
	do {
		swap = false;
		for (int i = 1; i < totalNr; i++) {
			if (x[i] < x[i - 1]) {
				swap = true;
				int aux = x[i];
				x[i] = x[i - 1];
				x[i - 1] = aux;

				for (int i = 0; i < totalNr; i++) {
					cout << x[i] << " ";
				}
				cout << endl;


			}
		}
	} while (swap);

	cout << "Afiseaza numerele finale:";
	for (int i = 0; i < totalNr; i++) {
		cout << x[i] << " ";
	}
}



	





