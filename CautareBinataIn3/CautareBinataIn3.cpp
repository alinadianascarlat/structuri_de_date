
//21.Implementati un algoritm de cautare binara,care imparte sirul in trei parti egale ,nu in doua.

#include<iostream>
using namespace std;


int cb(int v[], int st, int dr, int x) {
	if (dr < st) return -1;
	else
	{
		int m1 = 0.33 * (st + dr);
		int m2 = 0.66 * (st + dr);
		if (v[m1] == x) return m1;
		if (v[m2] == x) return m2;
		if (x < v[m1]) return cb(v, st, m1 - 1, x);
		if (x > v[m1] && x < v[m2]) return cb(v, m1 + 1, m2 - 1, x);
		if (x > v[m2]) return cb(v, m2 + 1, dr, x);
	}
}
void main(){
	int v[] = { 1, 5, 7, 12, 14, 29, 30 };
	int n = 7, x = 12;
	int poz = cb(v, 0, n - 1, x);
	if (poz == -1)
		cout << "Nu am gasit " << endl;
	else
		cout << "Gasit pe pozitia" << poz << endl;

		
	}

