//12. Într - o sală de spectacol trebuie planificate n spectacole într - o zi.Pentru
//fiecare spectacol se cunosc ora de început și ora de terminare(numere întregi).
//Să se planifice un număr maxim de spectacole astfel încât să nu fie două
//spectacole care să se suprapună.

#include <iostream>
using namespace std;

int inceput[100], sfarsit[100], nr[100];

int main()
{
	int n, i, h, schimb, ultim, aux;
	cout << "n= ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		nr[i] = i + 1; //transform timpul in minute

		cout << "Introduceti datele pentru spectacolul " << i + 1 << endl;
		cout << "Introduceti ora de inceput: ";
		cin >> h;
		inceput[i] = h * 60;

		cout << "Introduceti ora de sfarsit: ";
		cin >> h;
		sfarsit[i] = h * 60;
	}  //ordonez spectacolele crescator dupa ora de final
	do
	{
		schimb = 0;
		for (i = 0; i < n - 1; i++)
			if (sfarsit[nr[i]] > sfarsit[nr[i + 1]])
			{
				aux = nr[i]; nr[i] = nr[i + 1]; nr[i + 1] = aux; schimb = 1;
			}
	} while (schimb);
	cout << "Spectacolele selectate sunt:\n" << nr[0] << ' ';
	for (ultim = 0, i = 1; i < n; i++)
		if (inceput[nr[i]] >= sfarsit[nr[ultim]])
		{
			cout << nr[i] << ' '; ultim = i;
		}
	cout << endl;
	return 0;
}