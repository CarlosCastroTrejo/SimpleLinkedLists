#include "ListaLigadaSimple.h"



ListaLigadaSimple::ListaLigadaSimple()
{
	head = NULL;
}

void ListaLigadaSimple::setHead(NodoLigado* nodo)
{
	head = nodo;
}

NodoLigado* ListaLigadaSimple::getHead()
{
	return head;
}

void ListaLigadaSimple::insertarFin(int dato, string nombre)
{
	NodoLigado *auxiliar = new NodoLigado(dato,nombre);
	
	if (head == NULL) 
	{
		head = auxiliar;
	}
	else 
	{
		NodoLigado *buscar = head;
		while (buscar->getSig() != NULL) 
		{
			buscar = buscar->getSig();
		}
		buscar->setSig(auxiliar);
	}
}

void ListaLigadaSimple::insertarInicio(int dato, string nombre)
{
	NodoLigado *auxiliar = new NodoLigado(dato, nombre);

	if (head == NULL)
	{
		head = auxiliar;
	}
	else
	{
		auxiliar->setSig(head);
		head = auxiliar;
	}
}

void ListaLigadaSimple::borrarInicio()
{
	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		NodoLigado *borrar = head;
		head=head->getSig();
		delete borrar;
	}
}

void ListaLigadaSimple::borraFin() 
{
	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else if (head->getSig() == NULL) 
	{
		NodoLigado *auxiliarUltimo = head;
		head = NULL;
		delete auxiliarUltimo;
	}
	else
	{
		NodoLigado *auxiliarUltimo = head;
		NodoLigado *auxiliarPenultimo = head;
		int mayor = 0;

		while (auxiliarUltimo->getSig() != NULL)
		{
			auxiliarUltimo = auxiliarUltimo->getSig();
			mayor++;
			if (mayor >= 2) 
			{
				auxiliarPenultimo = auxiliarPenultimo->getSig();
			}
		}

		delete auxiliarUltimo;
		auxiliarPenultimo->setSig(NULL);
		

	}

}

void ListaLigadaSimple::imprimeInicio()
{
	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		cout << head << endl;
	}
}

void ListaLigadaSimple::imprimeFin()
{
	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		NodoLigado *buscar = head;
		while (buscar->getSig() != NULL)
		{
			buscar = buscar->getSig();
		}
		cout << buscar<<endl;
	}
}

void  ListaLigadaSimple::insertaOrden(int dato, string nombre) 
{
	NodoLigado *auxiliar = new NodoLigado(dato, nombre);

	if (head == NULL)
	{
		head = auxiliar;
	}
	else
	{
		NodoLigado *buscar = head;
		if (auxiliar->getDato()<=head->getDato()) 
		{
			auxiliar->setSig(head);
			head = auxiliar;
		}
		else 
		{
			while (buscar->getSig() != NULL && auxiliar->getDato() >= buscar->getSig()->getDato())
			{
				buscar = buscar->getSig();
			}
			auxiliar->setSig(buscar->getSig());
			buscar->setSig(auxiliar);
		}
	}
}

void ListaLigadaSimple::borraPorDato(int dato)
{
	NodoLigado *auxiliar = new NodoLigado(dato, "borra");
	NodoLigado *auxiliarUltimo = head;

	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else if (head->getSig() == NULL && head->getDato()==dato)
	{
		head = NULL;
		delete auxiliarUltimo;
	}
	else if (head->getSig() == NULL && head->getDato() != dato)
	{
		cout << "No se encontro ese elemento ERROR" << endl;
	}
	else
	{
		NodoLigado *auxiliarPenultimo = head;
		int mayor = 0;

		
		while (auxiliarUltimo->getSig() != NULL && auxiliar->getDato() != auxiliarUltimo->getSig()->getDato())
		{
			auxiliarUltimo = auxiliarUltimo->getSig();
			mayor++;
			if (mayor >= 2)
			{
				auxiliarPenultimo = auxiliarPenultimo->getSig();
			}
		}
		if (auxiliarUltimo->getSig() == NULL) 
		{
			cout << "No se encontro ese elemento ERROR" << endl;
		}
		else 
		{
			auxiliarPenultimo = auxiliarPenultimo->getSig();
			auxiliarUltimo = auxiliarUltimo->getSig();
			auxiliarPenultimo->setSig(auxiliarUltimo->getSig());
			auxiliarUltimo->setSig(NULL);
		}
		delete auxiliarUltimo;

		
		
	}

}

void ListaLigadaSimple::imprimeUnDato(int dato)
{
	NodoLigado *auxiliar = new NodoLigado(dato, "borra");
	NodoLigado *auxiliarUltimo = head;

	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else if (head->getSig() == NULL && head->getDato() == dato)
	{
		cout << head;
	}
	else if (head->getSig() == NULL && head->getDato() != dato)
	{
		cout << "No se encontro ese elemento ERROR" << endl;
	}
	else
	{
		while (auxiliarUltimo->getSig() != NULL && auxiliar->getDato() != auxiliarUltimo->getSig()->getDato())
		{
			auxiliarUltimo = auxiliarUltimo->getSig();
			
		}
		if (auxiliarUltimo->getSig() == NULL)
		{
			cout << "No se encontro ese elemento ERROR" << endl;
		}
		else
		{
			auxiliarUltimo = auxiliarUltimo->getSig();
			cout << auxiliarUltimo;
		}
	}

}

void ListaLigadaSimple::modificaDato(int dato,string nombre)
{
	NodoLigado *auxiliar = new NodoLigado(dato, nombre);
	NodoLigado *auxiliarUltimo = head;

	if (head == NULL)
	{
		cout << "La lista esta vacia" << endl;
	}
	else if (head->getSig() == NULL && head->getDato() == dato)
	{
		cout << head;
	}
	else if (head->getSig() == NULL && head->getDato() != dato)
	{
		cout << "No se encontro ese elemento ERROR" << endl;
	}
	else
	{
		while (auxiliarUltimo->getSig() != NULL && auxiliar->getDato() != auxiliarUltimo->getSig()->getDato())
		{
			auxiliarUltimo = auxiliarUltimo->getSig();

		}
		if (auxiliarUltimo->getSig() == NULL)
		{
			cout << "No se encontro ese elemento ERROR" << endl;
		}
		else
		{
			auxiliarUltimo = auxiliarUltimo->getSig();
			auxiliarUltimo->setNombre(nombre);
		}
	}

}


ostream& operator<<(ostream &o, ListaLigadaSimple lista)
{
	if (lista.head == NULL)
	{
		o << "La lista esta vacia" << endl;
	}
	else
	{
		NodoLigado *auxiliar = lista.head;
		while (auxiliar!= NULL)
		{
			o << auxiliar;
			auxiliar = auxiliar->getSig();
		}
	}
	return o;
}

ListaLigadaSimple::~ListaLigadaSimple()
{
}
