#include<iostream>
using namespace std;

int main() {
	
	int n, min, v[10];
	cout << " n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (v[i] > v[j]) {
				min = v[i];
				v[i] = v[j];
				v[j] = min;
			}
	
	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}
}