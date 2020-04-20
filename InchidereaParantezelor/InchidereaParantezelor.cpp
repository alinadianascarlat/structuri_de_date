
//13. Sa se verifice daca intr - o expresie se parantezele se inchid corect(a{ b[c]d }e
// corect //a[b{c}d]e} incorect).

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	char s[100];
	cout << "s = ";
	cin >> s;
	cout << strlen(s);
	int contorParantezeRot = 0;
	int contorAcolada = 0;
	int contorParantezeDrepte = 0;

	for (int i = 0; i < strlen(s); i++) {

		if (s[i] == '(')
			contorParantezeRot++;
		if (s[i] == ')')
			contorParantezeRot--;


		if (s[i] == '{')
			contorAcolada++;
		if (s[i] == '}')
			contorAcolada--;

		if (s[i] == '[')
			contorParantezeDrepte++;
		if (s[i] == ']')
			contorParantezeDrepte--;
	}
	if (contorParantezeRot == 0 && contorAcolada == 0 && contorParantezeDrepte == 0)
		cout << "Corect";
	else
		cout << "Incorect";


}