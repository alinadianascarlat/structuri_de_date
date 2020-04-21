//30. Scrieți un program în C care să conțină o funcție recursivă și o funcție iterativă
//replace(char* s, char from, char to) care schimba toate aparițiile lui from din s în
//to. (replace(steve, e, a) = stava).

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>

using namespace std;

char* replace(char* s, char from, char to) {
	char* s1 = new char[strlen(s) + 1];

	strcpy(s1, s);
	for (int i = 0; i < strlen(s1); i++) {
		if (s1[i] == from)
			s1[i] = to;
	}
	return s1;
}

int main() {
	char s[100];
	cout << replace((char*)"steve", 'e', 'a');	
}
