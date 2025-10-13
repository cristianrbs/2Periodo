/*Crie uma classe **`Livro`** com os seguintes atributos: **título**, **autor**, **editora** e **número de páginas.** 
A classe deve ter métodos para **definir** e **obter** cada um desses atributos (os *getters* e *setters*), 
sem contar o construtor que é peça fundamental e toda classe. Lembre de criar os dois arquivo `.h` e .`cpp`  
Crie também os métodos `imprimir()`, `copiar()` - construtor de cópia e `preencher()`; 
Em seguida, na função main, crie 2 livros, os preencha chamando o método preencher e informe qual deles possui maior numero de pagina. Para informar quem o maior use o método imprimir();*/
#include"Livro01.h"
#include<iostream>
using namespace std;

Livro01::Livro01(){
    this->titulo = "";
    this->autor = "";
    this->editora = "",
    this->paginas = 0;
}

Livro01::Livro01(const Livro01& outro){
    this->titulo = outro.titulo;
    this->autor = outro.autor;
    this->editora = outro.editora;
    this->paginas = outro.paginas;
}

void Livro01::preencher(){
    cout << "Informe o titulo: " <<endl;
    cin >> this->titulo;
    cout << "Informe o autor: " <<endl;
    cin >> this->autor;
    cout << "Informe a editora: " <<endl;
    cin >> this->editora;
    cout << "Informe o numero de paginas: " <<endl;
    cin >> this->paginas;
}

void Livro01::imprimir(){
    cout << "Titulo: " << this->titulo <<endl;
    cout << "Autor: "  << this->autor <<endl;
    cout << "Edtora: " << this->editora <<endl;
    cout << "Paginas: " << this->paginas <<endl;
    cout << "--------------" <<endl;
}

void Livro01::copiar(Livro01 & outro){
    this->titulo = outro.titulo;
    this->autor = outro.autor;
    this->editora = outro.editora;
    this->paginas = outro.paginas;
}

    int main(){
        Livro01 l1;

        l1.preencher();
        l1.imprimir();

        Livro01 l2(l1);
        l2.imprimir();

        return 0;
    }




