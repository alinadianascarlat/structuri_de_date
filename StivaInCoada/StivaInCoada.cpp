//20. Dup? o vacan?? de 3 luni, te �ntorci acas? ?i g?se?ti o gramad? de scrisori �n
//cutia po?tal?.Av�nd �n vedere c? printre scrisori se afl? ?i facturi ce trebuie pl?tite
//urgent ?i diverse reclame, trebuie s? le sortezi �n func?ie de prioritate.Elaboreaz?

//un astfel de algoritm �n C sau C++ pentru a transform? stiva de coresponden?? �ntr -
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

		for (int i = 1; i < capacitate - 1; i++) {
			elemente[i] = elemente[i + 1];
		}
		capacitate = capacitate - 1;
		return rezultat;
	}
};


int main()
{
	Stiva* stiva = new Stiva();
	int k = 0, n;
	cout << "Introduceti numarul de scrisori:" << endl;
	cin >> n;
	cout << "Introduceti elementele stivei(0-reviste, 1-facturi):" << endl;
	for (int i = 0; i < n; i++) {
		int el;
		cout << "Element = ";
		cin >> el;
		stiva->push(el);
	}

	Coada* coadaReviste = new Coada();
	Coada* coadaCorespondenta = new Coada();

	while (!stiva->isEmpty()) {
		if (stiva->pop() == 0)
			coadaReviste->push(0);
		else
			coadaCorespondenta->push(1);
	}
	while (!coadaReviste->isEmpty()) {
		coadaCorespondenta->push(coadaReviste->pop());
	}

	while (!coadaCorespondenta->isEmpty()) {
		cout << " " << coadaCorespondenta->pop();
	}

}
