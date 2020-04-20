﻿
Probleme de informatică
Clasa a IX - a
Elementele de bază C++ (46)
Subprograme predefinite(1)
Fişiere text(2)
Algoritmi elementari(111)
Tablouri unidimensionale(83)
Tablouri bidimensionale(64)
Probleme diverse(13)
Clasa a X - a
Subprograme(funcții) (87)
Şiruri de caractere(50)
Tipul înregistrare(26)
Recursivitate(57)
Alocarea dinamică a memoriei(2)
Liste înlănţuite(25)
Algoritmul lui Lee(1)
Clasa a XI - a
Metoda "Divide et impera" (12)
Metoda Backtracking(86)
Metoda Greedy(6)
Programare dinamică(18)
Grafuri neorientate(40)
Grafuri orientate(38)
Arbori(33)
Clasa a XII - a
Elemente de bază C# (32)
POO în C# (13)
Programare vizuală în C# (19)
Examen de bacalaureat
Competențe digitale
Examen de atestat
Admitere UBB(18)
Sa se afiseze in ordine alfabetica anagramele unui cuvant format din litere distincte.
Exemplu:
date.in
rac
date.out
acr
arc
car
cra
rac
rca


#include <fstream>
#include <cstring>
using namespace std;

ifstream is("date.in");
ofstream os("date.out");

int n;
char v[100], st[50], p[50];

void scrie()//afisez litere conform permutarii
{
    int i;
    {
        for (i = 1; i <= n; i++)
            os << v[st[i] - 1];
        os << '\n';
    }
}

void back(int k) / generez permutarile multimii{ 1,2,...n }
{
    for (int i = 1; i <= n; i++)
        if (!p[i])
        {
            st[k] = i;
            p[i] = 1;
            if (k == n) scrie();
            else back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    int i;
    is.get(v, 1000);
    n = strlen(v);
    for (int i = 0; i < n; i++) //ordonez alfabetic literele din cuvantul citit
        for (int j = i + 1; j < n; j++)
            if (v[i] > v[j])
            {
                char aux = v[i]; v[i] = v[j]; v[j] = aux;
            }
    back(1);
    is.close();
    os.close();
    return 0;
}

20 apr 2020
Site - ul conține 883 de probleme rezolvate
Copyright © 2009 - 2018 Muresan Vasile Ciprian