#include<iostream>
using namespace std;
//sortare descrescator
int main() {

	int n, max, v[10];
	cout << " n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (v[i] < v[j]) {
				max = v[j];
				v[j] = v[i];
				v[i] = max;
			}

	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}
}