#include "ListaContigua.h"
#include "Livro.h"

int main() {
    ListaContigua list(5);
    Livro l1,l2,l3,l4;

    l1.preencher();
    l1.imprimir();
    
    l2.preencher();
    l2.imprimir();
    
    l3.preencher();
    l3.imprimir();

    l4.preencher();
    l4.imprimir();

    list.insert(l1, 0);
    list.insert(l2, 1);
    list.insert(l3, 2);
    list.insert(l4, 3);

    list.remove(2);

    return 0;
}