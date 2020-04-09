#include <iostream>
using namespace std;

int o[50]; //ordinea obiectelor
float c[100], g[100], x[100], Gr, GMax;
int n;
int main()
{
	int i, schimb, aux;
	cout << "n= ";
	cin >> n;

	cout << "GMax= ";
	cin >> GMax;

	cout << "Castigul pt.fiecare obiect ="<<endl;
	cout << " Greutatea pt. fiecare obiect =";

	for (i = 0; i < n; i++)
	{
		o[i] = i; cin >> c[i] >> g[i];
	}
	//ordonez obiectele descrescator dupa castigul unitar
	do
	{
		schimb = 0;
		for (i = 0; i < n - 1; i++)
			if (c[o[i]] / g[o[i]] < c[o[i + 1]] / g[o[i + 1]])
			{
				aux = o[i];
				o[i] = o[i + 1];
				o[i + 1] = aux;
				schimb = 1;
			}
	} while (schimb);
	for (i = 0, Gr = GMax; i<n && Gr>g[o[i]]; i++)
	{
		x[o[i]] = 1;
		Gr -= g[o[i]];
	}
	if (i < n)
		x[o[i]] = Gr / g[o[i]];
	cout << "Obiectele selectate sunt:\n";
	for (i = 0; i < n; i++)
		if (x[i])
			cout << i + 1 << ' ' << x[i] * 100 << '%' << endl;
	return 0;
}