//37. Implementați SelectionSort pentru liste simplu înlănțuite

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Nod {
	int value;
	Nod* next;
};

Nod* cap = NULL;

void afisareLista(Nod* cap) {
	while (cap != NULL) {
		cout << cap->value << endl;
		cap = cap->next;
	}
}

void inserareInceput(Nod*& cap, int valoare) {
	Nod* p = new Nod;
	p->value = valoare;
	p->next = cap;
	cap = p;
}

void inserareFinal(Nod*& cap, int valoare) {
	Nod* p = new Nod;
	p->value = valoare;
	p->next = NULL;
	Nod* nod_curent = cap;
	while (nod_curent->next != NULL)
		nod_curent = nod_curent->next;
	nod_curent->next = p;
}

void stergereElement(Nod* predecesor) {
	Nod* victima = predecesor->next;
	predecesor->next = predecesor->next->next;
	delete victima;
}

Nod* cautarePozitie(Nod* cap, int pozitie) {
	int i = 0;
	while (cap != NULL && i < pozitie) {
		cap = cap->next;
		i++;
	}
	if (i == pozitie)
		return cap;
	else
		return NULL;
}

void stergereElementPozitie(Nod*& cap, int pozitie) {
	Nod* predecesor = cautarePozitie(cap, pozitie - 1);
	stergereElement(predecesor);
}

void ordonareLista(Nod*k){}

int main() {
	inserareInceput(cap, 16);
	inserareInceput(cap, 42);
	inserareFinal(cap, 14);
	cout << "Lista inainte de ordonare:" << endl;
	afisareLista(cap);

	Nod* predecesor = cap;
	for (Nod* p = cap; p->next != NULL; predecesor = p, p = p->next) {
		for (Nod* k = p->next; k != NULL; k = k->next) {
			if (p->value > k->value) {
				int aux = p->value;
				p->value = k->value;
				k->value = aux;
			}
		}
	}
	cout << "Lista dupa ordonare:" << endl;
	//stergereElementPozitie(cap, 1);
	afisareLista(cap);
	return 0;

}