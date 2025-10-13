#ifndef Livro_H
#define	Livro_H

#include <iostream>
#include <string.h>

using namespace std;


class Livro {
private:
		string isbn;
		string titulo;
		string autor;
		string editora;
		int edicao;

public:
	Livro();
	Livro(Livro & outro);
	void preencher();
	void imprimir();
	void copiar(Livro & outro);

	//!Getters
	string getIsbn();
	string getTitulo();
	string getAutor();
	string getEditora();
	int getEdicao();

	//!Setters
	void setIsbn(string isbn);
	void setTitulo(string titulo);
	void setAutor(string autor);
	void setEditora(string editora);
	void setEdicao(int edicao);
};

#endif