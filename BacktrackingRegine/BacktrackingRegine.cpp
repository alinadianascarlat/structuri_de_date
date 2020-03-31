#include<iostream>

using namespace std;

bool solutiePosibila(int a[4][4], int n, int i, int j) {
	for (int k = 0; k < n; k++) {
		if (a[i][j] == a[i][k] && k != j) { // aceeasi linie
			return false;
		}
		if (a[i][j] == a[k][j] && k != i) { // aceeasi coloana
			return false;
		}
	}



	return true;
}

int main() {
	bool sol = false;
	int n = 4;
	int a[4][4];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 0;
	

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (solutiePosibila(a, n, i, j) == true && a[i][j] == 0) {
				a[i][j] = 1;
			}


	}

	return 0;
}