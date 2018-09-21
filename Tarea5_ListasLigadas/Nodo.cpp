#include "Nodo.h"
#include <iostream>
#include<string>

using namespace std;

Nodo::Nodo()
{
	this->dato = 0;
	this->nombre = "";
}

Nodo::Nodo(int dato,string nombre)
{
	this->dato = dato;
	this->nombre = nombre;
}

void Nodo::setDato(int dato) 
{
	this->dato = dato;
}

int Nodo::getDato()
{
	return this->dato;
}

void Nodo::setNombre(string nombre)
{
	this->nombre = nombre;
}

string Nodo::getNombre()
{
	return this->nombre;
}

ostream& operator<<(ostream &o, const Nodo  &no)
{
	o << no.dato<<" "<<no.nombre;
	return o;
}

Nodo::~Nodo()
{
}
