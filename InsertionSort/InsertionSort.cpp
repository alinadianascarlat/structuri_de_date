#include<iostream>
using namespace std;
//ordonare crescatoare
int main() {

	int n, j, aux, v[20];
	cout << "n = ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	for (int i = 1; i < n; i++) {
		j = i;

		while (j > 0 && v[j - 1] > v[j]) {
			aux = v[j];
			v[j] = v[j - 1];
			v[j - 1] = aux;
			j--;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}
