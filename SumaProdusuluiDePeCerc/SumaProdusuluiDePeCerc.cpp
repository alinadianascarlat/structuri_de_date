

//4. Se citesc n numere naturale.Determina?i o a?ezare a acestor numere sub forma
//unui cerc, astfel încât suma produselor de câte dou? numere al?turate s? fie
//maxim?.

#include <iostream>
using namespace std;


int x[20], n, b[20], pmax = 0;

void afisare()
{
	for (int i = 1; i <= n; i++)
		cout << b[i] << " ";

}

void alege()
{
	int p = x[1] * x[n];
	for (int i = 1; i < n; i++)
		p = p + x[i] * x[i + 1];
	if (p > pmax)
	{
		pmax = p;
		for (int i = 1; i <= n; i++)
			b[i] = x[i];
	}
}

void interschimba(int& x, int& y)
{
	int aux = x;
	x = y;
	y = aux;
}

void permutare(int k, int n)
{
	for (int i = k; i <= n; i++)
	{
		interschimba(x[k], x[i]);
		if (k == n)
			alege();
		else
			permutare(k + 1, n);
		interschimba(x[k], x[i]);
	}
}

int main()
{
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> x[i];
	permutare(1, n);
	afisare();
	return 0;
}