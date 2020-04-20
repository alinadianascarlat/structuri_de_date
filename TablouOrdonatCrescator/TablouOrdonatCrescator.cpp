//10. Folosind metoda divide et impera, scrie?i o func?ie care s? determine dac? un
//tablou cu elemente întregi este ordonat cresc?tor.

int main()
{
    int v[100];
    int i, n, crescator;
    cout << "Dati dimensiunea vectorului "; 
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Dati valoarea " << i + 1 << " ";
        cin >> v[i];
    }
    //presupunem ca vectorul este ordonat crescator !
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