//31.Scrie?i un program în C care s? afi?eze o list? simplu înl?n?uit? în ordine
//invers?.

#include <iostream>
#include <conio.h>

using namespace std;



struct Node
{
    int value;
    Node* next;
};

typedef Node* LinkedList;
LinkedList push_front(LinkedList list, int value)
{
    Node* crt = new Node;
    crt->value = value;
    crt->next = list;

    return crt;
}

void release(LinkedList lista)
{
    Node* crt = lista;
    while (crt != NULL)
    {
        Node* next = crt->next;
        delete crt;
        crt = next;
    }
}

void print(LinkedList list)
{
    Node* crt = list;
    while (crt != NULL)
    {
        cout << crt->value << endl;
        crt = crt->next;
    }
}


    LinkedList revert(LinkedList list) {
        LinkedList temporara = list;
        LinkedList inversa = NULL;
        while (temporara != NULL) {
            list = list->next;
            temporara->next = inversa;
            inversa = temporara;
            temporara = list;
        }
        return inversa;
    }


int main()
{
    LinkedList list = NULL;

    list = push_front(list, 9);
    list = push_front(list, 3);
    list = push_front(list, 4);
    list = push_front(list, 5);

    cout << "Lista originala:" << endl;
    print(list);

    list = revert(list);

    cout << "Lista inversata: " << endl;
    print(list);

    release(list);

    return 0;
}