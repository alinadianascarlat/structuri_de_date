//3. Se citește un număr n.Generați și afișați toate combinațiile de câte n cifre binare
//care nu au două cifre de 1 alăturate.

#include<iostream>
using namespace std;

int v[20], n;

void afisare() {
	for (int i = 0; i <= n; i++)
		cout << v[i];
	cout << endl;
}
void backtracking(int k) {
	for (int i = 0; i <= 1; i++) {
		v[k] = i;
		if (k > 1)
			if (v[k] * v[k - 1] != 1)
				if (k == n)
					afisare();
				else
					backtracking(k + 1);
			else;
		else  backtracking(k + 1);
	}
}
int main() {
	cout << "n = ";
	cin >> n;
	backtracking(1);
	return 0;
}