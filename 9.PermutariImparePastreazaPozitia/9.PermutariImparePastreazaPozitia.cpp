//9. Se citește un număr natural n.Afișați permutările mulțimii 1, 2, 3, ..., n în 
//care elementele impare sunt puncte fixe(se află pe poziție egale cu valoarea lor)

#include <iostream>
using namespace std;

int n, sol[20], p[20];

void afiseaza() {
	for (int i = 1; i <= n; i++)
		if (i % 2 != 0)
			cout << i << " ";
		else
			cout << sol[i] << " ";
	cout << endl;
}

void backtracking(int k)
{
	for (int i = 2; i <= n; i = i + 2)
		if (p[i] == 0)
		{
			sol[k] = i;
			p[i] = 1;

			if ((n % 2 == 1 && k == n - 1) || (n % 2 == 0 && k == n))
				afiseaza();
			else
				backtracking(k + 2);
			p[i] = 0;
		}
}

int main()
{
	cout << "n = ";
	cin >> n;
	cout << "Permutari:" << endl;
	backtracking(2);
}
