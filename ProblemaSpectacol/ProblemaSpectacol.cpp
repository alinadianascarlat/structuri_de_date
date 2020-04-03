
//Intr - o sala de spectacol trebuie planificate n spectacole intr - o zi.Pentru fiecare spectacol se cunosc ora de inceput si ora de terminare(numere intregi).
//Sa se planifice un numar maxim de spectacole astfel inct sa nu fie doua spectacole care sa se suprapuna.


#include<iostream>
using namespace std;

struct spectacol
{
    int s, d;
};

void read(int& n, spectacol a[])
{
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].s >> a[i].d;
}

void ordonare(int n, spectacol a[])
{
    int i, j;
    spectacol aux;
    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++)
            if (a[i].d > a[j].d)
            {
                aux = a[i]; a[i] = a[j]; a[j] = aux;
            }
}

void afis(int n, spectacol a[])
{
    for (int i = 1; i <= n; i++)
        cout << a[i].s << "," << a[i].d << " ";
}

void greedy(int n, spectacol a[])
{
    spectacol s[100];
    int i, k;
    k = 1;
    s[1] = a[1];
    for (i = 2; i <= n; i++)
        if (s[k].d < a[i].s) s[++k] = a[i];
    afis(k, s);
}

int main()
{
    int n;
    spectacol a[100];
    read(n, a);
    ordonare(n, a);
    greedy(n, a);

}