//29. Scrieți un program în C care să conțină o funcție recursivă și o funcție iterativă
//count_spaces(char* s) care numără câte spații libere apar într - un string.

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>

using namespace std;

int count_space(char* s) {
	int m = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ')
			m++;
	}

	return m;
}

int main() {
	char s[100];
	//cout << " s = ";
	//cin >> s;
	cout << count_space((char*)"AS DF");
}