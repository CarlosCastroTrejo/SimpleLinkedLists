#pragma once
#include <iostream>
#include "NodoLigado.h"
#include<string>
using namespace std;
class ListaLigadaSimple
{
	NodoLigado *head;
public:
	ListaLigadaSimple();
	void setHead(NodoLigado*);
	NodoLigado* getHead();
	void insertarFin(int,string);
	void insertarInicio(int, string);
	void borrarInicio();
	void borraFin();
	void imprimeInicio();
	void imprimeFin();
	void insertaOrden(int,string);
	void borraPorDato(int);
	void imprimeUnDato(int);
	void modificaDato(int,string);

	friend ostream& operator<<(ostream &o, ListaLigadaSimple);

	~ListaLigadaSimple();
};

