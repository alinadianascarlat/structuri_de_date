//2. Având o tabl? de ?ah ?i un cal a?ezat pe o pozi?ie random pe acea tabl?, s? se
//parcurg? întreaga tabl? de ?ah, astfel încât calul s? treac? cel mult o dat? printr - o
//c?su??.


#include<iostream>
#include<stdio.h>
using namespace std;

const int x[8] = { -1,1,2,2,1,-1,-2,-2 };
const int y[8] = { 2,2,1,-1,-2,-2,-1,1 };
int tabla[50][50], pasi, i, j, n;

int Valoare(int l, int c)
{
    int nr = 0, i;
    for (i = 0; i <= 7; i++)
        if (l + x[i] >= 1 &&
            l + x[i] <= n &&
            c + y[i] >= 1 &&
            c + y[i] <= n &&
            tabla[l + x[i]][c + y[i]] == 0)
            nr++;
    return nr;
}
void Sar(int l, int c)
{
    int i, min, v, linie, coloana, gasit;
    tabla[l][c] = pasi + 1;
    gasit = 0;
    min = 9;
    for (i = 0; i <= 7; i++)
        if (l + x[i] >= 1 && l + x[i] <= n &&
            c + y[i] >= 1 && c + y[i] <= n &&
            tabla[l + x[i]][c + y[i]] == 0)
        {
            v = Valoare(l + x[i], c + y[i]);
            if (v < min)
            {
                min = v;
                linie = l + x[i];
                coloana = c + y[i];
                gasit = 1;
            }
        }
    if (gasit)
    {
        pasi++;
        Sar(linie, coloana);
    }
}

void main()
{
    cout << "n="; cin >> n;
    tabla[1][1] = 1;

    // Initializare
    for (i = 0; i <= n + 1; i++)
    {
        tabla[0][i] = 1;
        tabla[n + 1][i] = 1;
        tabla[i][0] = 1;
        tabla[i][n + 1] = 1;
    }

    Sar(1, 1);
    
    // Afisare
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%4d", tabla[i][j]);
        cout << endl;
    }
}