// 6.Se citeste un numar natural n. Afisati permutarile multimii 1,2,3,..n in care pana 
// la jumatate elementele sunt in ordine crescatoare,
// iar cealalta jumatate pana la final sunt in ordine descrescatoare.

#include<iostream>
using namespace std;

int main() {
	int n, p[30], v[30], temp;
	cout << "n = ";
	cin >> n;

	for (int i = 0; i < n ; i++)
		cout << v[i] << endl;

	for(int j = 0; j <n/2; j++)
		
			if(v[i] >v[j])
				{
					temp = v[i];
					v[i] = v[j];
				v[j] = temp;
				}


}