#include "NodoLigado.h"



NodoLigado::NodoLigado() :Nodo(), sig(NULL) {}


NodoLigado::NodoLigado(int dato, string nombre) : Nodo(dato, nombre), sig(NULL) {}

void NodoLigado::setSig(NodoLigado* nodo) 
{
	sig = nodo;
}

NodoLigado* NodoLigado::getSig() 
{
	return sig;
}

ostream& operator<<(ostream &o, NodoLigado* nodo) 
{
	if (nodo != NULL) 
	{
		if (nodo->getSig() != NULL)
		{
			o << "Clave: " << nodo->getDato() << " Nombre: " << nodo->getNombre() << " Siguiente: " << *nodo->getSig() << endl;
		}
		else
		{
			o << "Clave: " << nodo->getDato() << " Nombre: " << nodo->getNombre() << " No hay siguiente" << endl;
		}

		return o;
	}
	else 
	{
		o << "Nodo vacio"<<endl;
		return o;
	}
	
}



NodoLigado::~NodoLigado()
{
}
