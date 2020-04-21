
#include <fstream>
#include <cstring>

using namespace std;


int n;
char v[100], st[50], p[50];

void scrie()//afisez litere conform permutarii
{
    int i;
    {
        for (i = 1; i <= strlen(s); i++)
            cout << v[st[i] - 1];
        cout << '\n';
    }
}

void back(int k) / generez permutarile multimii{ 1,2,...n }
{
    for (int i = 1; i <= n; i++)
        if (!p[i])
        {
            st[k] = i;
            p[i] = 1;
            if (k == n)
                scrie();
            else 
                back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    int i;
    char s[100];
    cout << " n = ";
    cin >> n;
    
    for (int i = 0; i < strlen(s); i++) //ordonez alfabetic literele din cuvantul citit
        for (int j = i + 1; j < strlen(s); j++)
            if (v[i] > v[j])
            {
                char aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    back(1);
    
    return 0;
}

