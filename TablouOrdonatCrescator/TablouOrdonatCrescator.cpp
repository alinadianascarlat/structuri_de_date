//10. Folosind metoda divide et impera, scrieți o funcție care să determine dacă un
//tablou cu elemente întregi este ordonat crescător.


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int v[100];
    int i, n, crescator;
    cout << "n = "; 
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Dati valoarea " << i + 1 << " ";
        cin >> v[i];
    }
    
    crescator = 1;
    i = 0;
    while ((i < n - 1) && (crescator != 0))
    {
        if (v[i] > v[i + 1])
            crescator = 0;
        i++;
    }
    if (crescator == 0) 
        cout << "Vectorul nu este ordonat crescator";
    else
        cout << "Vectorul este ordonat crescator !";
    return 0;
}