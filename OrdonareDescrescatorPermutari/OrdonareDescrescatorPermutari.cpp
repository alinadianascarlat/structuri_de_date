// 6.Se citeste un numar natural n. Afisati permutarile multimii 1,2,3,..n in care pana 
// la jumatate elementele sunt in ordine crescatoare,
// iar cealalta jumatate pana la final sunt in ordine descrescatoare.


#include<iostream>
using namespace std;

int n, sol[30], m[30];

void afiseaza()
{
    for (int i = 1; i <= n; i++)
        cout << sol[i] << " ";
    cout << endl;
}

int valid(int k)
{
    if (k > 1)
        if (k <= (n + 1) / 2)
        {
            if (sol[k] < sol[k - 1])
                return 0;
        }
        else
            if (sol[k] > sol[k - 1])
                return 0;
    return 1;
}

void backtraking(int k)
{
    for (int i = 1; i <= n; i++)
        if (m[i] == 0)
        {
            sol[k] = i;
            m[i] = 1;
            if (valid(k)) if (k == n) afiseaza();
            else backtraking(k + 1);
            m[i] = 0;
        }
}

int main()
{
    cout << "n = ";
    cin >> n;
    cout << "Permutari:";
    backtraking(1);

}



