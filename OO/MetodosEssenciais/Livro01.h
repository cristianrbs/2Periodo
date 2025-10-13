/*Crie uma classe **`Livro`** com os seguintes atributos: **título**, **autor**, **editora** e **número de páginas.** 
A classe deve ter métodos para **definir** e **obter** cada um desses atributos (os *getters* e *setters*), 
sem contar o construtor que é peça fundamental e toda classe. Lembre de criar os dois arquivo `.h` e .`cpp`  
Crie também os métodos `imprimir()`, `copiar()` - construtor de cópia e `preencher()`; 
Em seguida, na função main, crie 2 livros, os preencha chamando o método preencher e informe qual deles possui maior numero de pagina. Para informar quem o maior use o método imprimir();*/

#ifndef Livro01_H
#define Livro01_H

#include<string>
using namespace std;


class Livro01
{
private:
    string titulo;
    string autor;
    string editora;
    int paginas;
public:
    Livro01();
    Livro01(const Livro01 & outro);
    void preencher();
    void imprimir();
    void copiar(Livro01 & outro);

    //!Getters
    string getTitulo();
    string getAutor();
    string getEditora();
    int getPaginas();

    //!Setters
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setEditora(string editora);
    void setPaginas(int paginas);
};

#endif