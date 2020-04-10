// 31. Scrieți un program în C care să afișeze o listă simplu înlănțuită în ordine
//inversă

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


int main() {
	inserareInceput(cap, 16);
	inserareInceput(cap, 42);
	inserareFinal(cap, 14);
	afisareLista(cap);

	Nod* prePredecesor = NULL;
	Nod* predecesor = cap;
	for (Nod* p = cap->next; p->next != NULL; prePredecesor = predecesor, predecesor = p, p = p->next) {
		Nod* k = p;
		while (predecesor != null && predecesor->value > k->value)
		{
			Nod* aux = k->next;
			k->next = predecesor;
			predecesor->next = aux;
			if (prePredecesor != NULL)
				prePredecesor->next = k;

		}
		j = i;

		while (j > 0 && v[j - 1] > v[j]) {
			aux = v[j];
			v[j] = v[j - 1];
			v[j - 1] = aux;
			j--;
		}
	}

	//stergereElementPozitie(cap, 1);
	afisareLista(cap);
	return 0;

}

