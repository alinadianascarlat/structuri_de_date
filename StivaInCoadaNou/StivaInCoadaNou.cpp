//20. Dup? o vacan?? de 3 luni, te întorci acas? ?i g?se?ti o gramad? de scrisori în
//cutia po?tal?.Având în vedere c? printre scrisori se afl? ?i facturi ce trebuie pl?tite
//urgent ?i diverse reclame, trebuie s? le sortezi în func?ie de prioritate.Elaboreaz?
//un astfel de algoritm în C sau C++ pentru a transform? stiva de coresponden?? într -
//o coad? de priorit??i.

#include <iostream>
#include <conio.h>

using namespace std;

class Stiva {
private:
	int elemente[100];
	int capacitate = 0;

public:
	bool isEmpty() {
		if (capacitate == 0)
			return true;
		return false;
	}

	void push(int numar) {
		capacitate = capacitate + 1;
		elemente[capacitate] = numar;
	}

	int peek() {
		return elemente[capacitate];
	}

	int pop() {
		int rezultat = peek();
		capacitate = capacitate - 1;
		return rezultat;
	}

};

class Coada {
private:
	int elemente[100];
	int capacitate = 0;

public:
	bool isEmpty() {
		if (capacitate == 0)
			return true;
		return false;
	}

	void push(int numar) {
		capacitate = capacitate + 1;
		elemente[capacitate] = numar;
	}

	int front() {
		return elemente[1];
	}


	int pop() {
		int rezultat = elemente[1];

		for (int i = 1; i < capacitate; i++) {
			elemente[i] = elemente[i + 1];
		}
		capacitate = capacitate - 1;
		return rezultat;
	}
};


int main()
{
	Stiva* stiva = new Stiva();
	int prioritateMax = 100;
	int n;
	cout << "Introduceti numarul de scrisori:" << endl;
	cin >> n;
	cout << "Introduceti prioritatile stivei:" << endl;
	for (int i = 0; i < n; i++) {
		int el;
		cout << "Element = ";
		cin >> el;
		stiva->push(el);
	}

	Coada* coadaCorespondenta = new Coada();

	// Creem coada sortata
	int ultimCoada = prioritateMax;
	while (!stiva->isEmpty()) {
		int elStiva = stiva->pop();
		if (elStiva <= ultimCoada)
		{
			// Elementul este mai mic decat celelalte, punem la final
			coadaCorespondenta->push(elStiva);
			ultimCoada = elStiva;
		}
		else
		{
			// Elementul e mai mare decat ultimul, trebui pus in interior sau primul
			// Scoatem elementele din fata coadei si le punem in spate pana putem pune noul element
			int minimCoada = ultimCoada;
			bool added = false;
			do
			{
				int elCoada = coadaCorespondenta->pop();
				if (elStiva > elCoada && !added)
				{
					coadaCorespondenta->push(elStiva);
					coadaCorespondenta->push(elCoada);
					ultimCoada = elCoada;
					added = true;
				}
				else
				{
					coadaCorespondenta->push(elCoada);
					ultimCoada = elCoada;
				}			
			} while (ultimCoada != minimCoada);
		}			
	}

	cout << "Coada de corespondenta este: ";
	while (!coadaCorespondenta->isEmpty()) {
		cout << " " << coadaCorespondenta->pop();
	}

}
