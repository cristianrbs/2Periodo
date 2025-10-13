
#ifndef ContaBancaria_H
#define ContaBancaria_H

#include<string>
using namespace std;

class ContaBancaria{
private:
	int conta;
	string titular;
	double saldo;

public:
	ContaBancaria();

	//!Getters
	int getConta();
	string getTitular();
	double getSaldo();

	//!Setters
	void setConta(int conta);
	void setTitular(string titular);
	void setSaldo(double saldo);
};

#endif