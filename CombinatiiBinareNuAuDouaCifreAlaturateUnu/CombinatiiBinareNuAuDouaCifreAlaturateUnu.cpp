//3. Se cite?te un num?r n.Genera?i ?i afi?a?i toate combina?iile de câte n cifre binare
//care nu au dou? cifre de 1 al?turate.

#include <fstream>
using namespace std;

int x[15], n;

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";

}

void back01(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        x[k] = i;
        if (k > 1) if (x[k] * x[k - 1] != 1)
            if (k == n)  
                afis();
            else back01(k + 1);
        else;
        else back01(k + 1);
    }
}

int  main()
{
    
    cin >> n;
    back01(1);
    return 0;
}