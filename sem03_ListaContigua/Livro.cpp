#include "Livro.h"

Livro::Livro(){
    this->isbn = "";
	this->titulo = "";
	this->autor = "";
	this->editora = "";
	this->edicao = 0;
}

Livro::Livro(Livro &outro){
	this->isbn = outro.getIsbn();
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
	this->editora = outro.getEditora();
	this->edicao = outro.getEdicao();
}

void Livro::copiar(Livro & outro){
	this->isbn = outro.getIsbn();
	this->titulo = outro.getTitulo();
	this->autor = outro.getAutor();
	this->editora = outro.getEditora();
	this->edicao = outro.getEdicao();
}

void Livro::preencher(){
	cout << "Informe o ISBN: " <<endl;
	cin >> this->isbn;
    cout << "Informe o titulo: " <<endl;
    cin >> this->titulo;
    cout << "Informe o autor: " <<endl;
    cin >> this->autor;
    cout << "Informe a editora: " <<endl;
    cin >> this->editora;
    cout << "Informe o numero de edicao: " <<endl;
    cin >> this->edicao;
}

void Livro::imprimir(){
	cout << "ISBN: " << this->isbn <<endl;
    cout << "Titulo: " << this->titulo <<endl;
    cout << "Autor: "  << this->autor <<endl;
    cout << "Edtora: " << this->editora <<endl;
    cout << "Edicao: " << this->edicao <<endl;
    cout << "--------------" <<endl;
}

//!Getters
string Livro::getIsbn(){
	return this->isbn; 
}
string Livro::getTitulo(){
	return this->titulo;
}
string Livro::getAutor(){
	return this->autor;
}
string Livro::getEditora(){
	return this->editora;
}
int Livro::getEdicao(){
	return this->edicao;
}

//!Setters
void Livro::setIsbn(string isbn){
	this->isbn = isbn;
}
void Livro::setTitulo(string titulo){
	this->titulo = titulo;
}
void Livro::setAutor(string autor){
	this->autor = autor;
}
void Livro::setEditora(string editora){
	this->editora = editora;
}

void Livro::setEdicao(int edicao){
	this->edicao = edicao;
}