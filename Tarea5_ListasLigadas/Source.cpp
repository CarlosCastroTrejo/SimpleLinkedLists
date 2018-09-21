#include<iostream>
#include<string>
#include "ListaLigadaSimple.h"

using namespace std;

int main() 
{
	ListaLigadaSimple miLista;

	miLista.insertarFin(1, "uno");
	miLista.insertarFin(2, "dos");
	miLista.insertarFin(3, "tres");
	miLista.insertarFin(4, "cuatro");
	miLista.insertarFin(5, "cinco");
	miLista.insertarFin(10, "diez");
	miLista.insertarFin(11, "once");
	miLista.insertarFin(12, "trece");

	cout << "Lista completa: " << endl;
	cout << miLista;

	cout <<endl<< "Inicio de la lista: " << endl;
	miLista.imprimeInicio();

	cout << "Fin de la lista: " << endl;
	miLista.imprimeFin();

	
	miLista.insertaOrden(6, "seis");
	miLista.insertaOrden(15, "quince");
	miLista.insertaOrden(13, "trece");
	miLista.insertaOrden(0, "cero");

	//miLista.borrarInicio();
	//miLista.borraFin();
	//miLista.borraPorDato(10);
	//miLista.borraPorDato(12);
	//miLista.imprimeUnDato(1);

	miLista.modificaDato(10, "corremucho");








	cout << "Lista completa: " << endl;
	cout << miLista<<endl;

	

	system("pause");
}