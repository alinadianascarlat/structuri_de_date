#include <iostream>
#include <conio.h>

using namespace std;

const int LIM = 100;
void push(int coada[], int& k, int numar) {
	k = k + 1;
	coada[k] = numar;
}


int front(int coada[]) {
	return coada[1];
}


int pop(int coada[], int& k) {
	int rezultat = coada[1];

	for (int i = 1; i < k - 1; i++) {
		coada[i] = coada[i + 1];
	}
		k = k - 1;
		return rezultat;
}

int main()
{
	int coada[LIM], k = 0;
	push(coada, k, 2);
	push(coada, k, 4);
	push(coada, k, 6);
	push(coada, k, 7);
	push(coada, k, 8);
	cout << pop(coada, k) << " ";
	cout << pop(coada, k) << " ";
	cout << pop(coada, k) << " ";
	return 0;
}



