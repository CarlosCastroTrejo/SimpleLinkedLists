#pragma once
#include <iostream>
#include<string>
using namespace std;
class Nodo
{
	string nombre;
	int dato;
public:
	Nodo();
	Nodo(int,string);
	void setNombre(string);
	string getNombre();
	void setDato(int);
	int getDato();
	friend ostream& operator<<(ostream &o, const Nodo  &no);

	~Nodo();
};

