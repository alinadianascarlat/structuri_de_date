//38.Verificati daca un numar este palindrom.

#include<iostream>

using namespace std;

int n, c, ogl; 
int main(){
	cout << "n =";
	cin >> n;
	while (n != 0) {
		c = n % 10;
		n = n / 10;
		ogl = ogl * 10 +c;
		
	}
	if (ogl == n)

		cout << "DA";
	else
		cout << "Nu";
	return 0;

}
