#include <iostream>
#include <conio.h>

using namespace std;

int t[27][27];
int s[3][1001];
int i, j, n, nr, c;

void afisare(){
	cout << "Solutie: ";
	for (int i = 0; i < n * n; i++)
		cout << s[1][i] + " " + s[2][i];
}

void cal(int l, int c, int nr) {
	if (t[l][c] == 0) {
		nr = nr + 1;
		t[l][c] = 1;
		s[1][nr] = 1;
		s[2][nr] = c;
		if (nr == n * n)
			afisare();
		else {
			cal(l - 1, c + 2, nr);
			cal(l + 1, c + 2, nr);
			cal(l + 2, c + 1, nr);
			cal(l + 2, c - 1, nr);
			cal(l + 1, c - 2, nr);
			cal(l - 1, c - 2, nr);
			cal(l - 2, c - 1, nr);
			cal(l - 2, c + 1, nr);
		}
		t[l][c] = 0;
	}
}

void main()
{
	cout << "n=";
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			t[i][j] = 0;

	for (int i = 1; i <= n + 2; i++) {
		t[1][i] = 1; t[0][i] = 1;
		t[n + 1][i] = 1; t[n + 2][i] = 1;
		t[i][1] = 1; t[i][0] = 1;
		t[i][n + 1] = 1; t[i][n + 2] = 1;
	}
	nr = 0;
	cal(1, 1, 0);
}
