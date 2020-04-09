//32. Scrieți un program în C care să afișeze triunghiul lui Pascal pentru n dat.

#include<iostream>
using namespace std;

int main()
{
	int n, a[20][20];

	cout << "n = ";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		a[i][i] = 1;
		a[i][0] = 1;
	}

	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= i - 1; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}
