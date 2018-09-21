#pragma once
#include "Nodo.h"
#include <iostream>
#include<string>

class NodoLigado: public Nodo
{
	NodoLigado *sig;
public:
	NodoLigado();
	NodoLigado(int,string);
	void setSig(NodoLigado*);
	NodoLigado* getSig();
	friend ostream& operator<<(ostream &o, NodoLigado*);

	~NodoLigado();
};

