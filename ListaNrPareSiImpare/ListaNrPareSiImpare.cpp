
//15.Creati doua liste:una ce contine numere pare si alta ce contine numere impare.Numerele se vor citi de
//la tastatura pana se introduce -1.

#include <iostream>
using namespace std;

struct nod
{
    nod* next;
    int val;
};

void push(nod*& p, int x)
{
    if (p == NULL)
    {
        p = new nod();
        p->val = x;
        p->next = NULL;
        return;
    }

    nod* q = p;
    while (q->next)
    {
        q = q->next;
    }
    q->next = new nod();
    q = q->next;
    q->val = x;
    q->next = NULL;
}
/*
void pop(nod * & p)
{
    if(p->next == NULL)
        {
            delete(p);
            return;
        }

    nod * q = p, * o;
    while(q->next->next)
        {
            q = q->next;
        }
    o = q->next;
    q->next = NULL;
    delete(o);
}
*/
void citire_lista(nod*& p)
{
    int x, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        push(p, x);
    }
}

void afisare_lista(nod* p)
{
    while (p)
    {
        cout << p->val << ' ';
        p = p->next;
    }
    cout << '\n';
}

void extrage(nod* p, nod*& p2, bool paritate) //paritate = 0 pentru par si 1 pentru impar; p2 va fi lista formata cu numere pare/impare
{
    while (p)
    {
        if (p->val % 2 == paritate)
        {
            push(p2, p->val);
        }
        p = p->next;
    }
}
int main()
{
    nod* l1 = NULL, * l2 = NULL, * l3 = NULL; //capetele listelor

    citire_lista(l1);
    extrage(l1, l2, 0);
    extrage(l1, l3, 1);
    afisare_lista(l2);
    afisare_lista(l3);
    return 0;
}
