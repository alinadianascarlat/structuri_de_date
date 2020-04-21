//10. Folosind metoda divide et impera, scrieți o funcție care să determine dacă un
//tablou cu elemente întregi este ordonat crescător.


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n, v[100];
	cout << " n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]= ";
		cin >> v[i];
	}

	bool  crescator = true;
	for (int i = 0; i < n - 1; i++) {
		if (v[i] > v[i + 1]) {
			crescator = false;
		}
	}
	cout << "Sirul crescator:"<<crescator;
	
}