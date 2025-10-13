#include "ListaContigua.h"

ListaContigua::ListaContigua(int tamanho){
    this->tam = tamanho;
    this->quant = 0;
    list = new Livro[tam];
}

void ListaContigua::ShiftEnd(int posicao){
    if (posicao >= 0 and posicao <= quant - 1)
    {
        for (int i = quant - 1; i > posicao ; i--)
        {
            list[i].copiar(list[i-1]);
        }
    }
}

void ListaContigua::ShiftFront(int posicao){
    if(posicao >= 0)
    {
        for (int i = posicao; i < quant - 1; i++)
        {
            list[i].copiar(list[i+1]);
        }
    }    
}

void ListaContigua::remove(int posicao){
    if (posicao < 0 or posicao >= quant)
    {
        cout << "Posicao invalida" <<endl;
    }
    
    else if (quant < 0)
    {
        cout << "Lista vazia" <<endl;
    }
    
    else
    {
        ShiftFront(posicao);
        quant--;
    }
    
}

void ListaContigua::insert(Livro elemento, int posicao){
    if (posicao < 0 or posicao > quant)
    {
        cout << "Posicao invalida" <<endl;
    }

    else if (quant == tam)
    {
        cout << "Lista cheia" <<endl;
    }
    
    else
    {
        ShiftEnd(posicao);
        list[posicao].copiar(elemento);
        quant++;
    }
}