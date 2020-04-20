
#include <iostream>

using namespace std;

int n = 6;
int vi[] = { 0, 11, 6, 10, 3, 11, 10 };
int gi[] = { 0, 9, 4, 3, 8, 7, 3 };
int m[7][15];
int alese[7][15];
int G = 14;

int algorithm() {
	for (int g = 0; g <= G; g++)
		m[0][g] = 0;

	for (int i = 1; i <= n; i++) {
		for (int g = 0; g <= G; g++) {
			if ((gi[i] <= g) && (vi[i] + m[i - 1][g - gi[i]] > m[i - 1][g])) {
				m[i][g] = vi[i] + m[i - 1][g - gi[i]];
				alese[i][g] = 1;
			}
			else {
				m[i][g] = m[i - 1][g];
				alese[i][g] = 0;
			}
		}
	}

	//int k = G;
	//for (int i = n; i >= 1; i--) {
	//	if (alese[i][k] == 1) {
	//		//cout << i << " ";
	//		k = k - gi[i];
	//	}
	//}

	return m[n][G];
}

int main()
{
	cout << "Greutatea maxima: " << algorithm() << " este obtinuta cu obiectele de pe pozitiile: ";
	int k = G;
	for (int i = n; i >= 1; i--) {
		if (alese[i][k] == 1) {
			cout << i << " ";
			k = k - gi[i];
		}
	}
	cout << endl;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= G; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
