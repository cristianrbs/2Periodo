
#include"ContaBancaria.h"
using namespace std;

ContaBancaria::ContaBancaria(){
	conta = 0;
	titular = "";
	saldo = 0;
}

//!Getters
int ContaBancaria::getConta(){
	return conta;
}

string ContaBancaria::getTitular(){
	return titular;
}

double ContaBancaria::getSaldo(){
	return saldo;
}

//!Setters
void ContaBancaria::setConta(int conta){
	this->conta = conta;
}

void ContaBancaria::setTitular(string titular){
	this->titular = titular;
}

void ContaBancaria::setSaldo(double saldo){
	this->saldo = saldo;
}

int main(){
	ContaBancaria b1;


	b1.setConta(12312312);
	b1.setTitular("Cristian");
	b1.setSaldo(15000);

	return 0;
}