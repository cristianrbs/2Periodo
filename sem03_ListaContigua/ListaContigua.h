#include "Livro.h"

class ListaContigua{
private:
    int tam;
    int quant;
    Livro* list; 

public:
    ListaContigua();
    ListaContigua(ListaContigua & outro);
    ListaContigua(int tamanho);
    void ShiftEnd(int posicao);
    void ShiftFront(int posicao);
    void insert(Livro elemento, int posicao);
    void remove(int Posicao);
    void imprimir();
    void preencher();
};
