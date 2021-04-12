#pragma once
#include "Mascota.h"

class ListaMascotas
{
private:
	Mascota* Lista;
	int tamLista;
	int indice;
public:
	ListaMascotas(int tam);
	~ListaMascotas();
	void mostrarLista();
	void insertarMascota(Mascota A);
};

ListaMascotas::ListaMascotas(int tam)
{
	tamLista = tam;
	indice = 0;
	Lista = new Mascota[tamLista];
}

ListaMascotas::~ListaMascotas()
{
}

void ListaMascotas::mostrarLista() {
	for (int i = 0; i < indice; i++) {
		cout << i << ".- " << endl;
		Lista[i].mostrarMascota();
	}
}
void ListaMascotas::insertarMascota(Mascota A) {
	if (indice < 20) {
		Lista[indice] = A;
		indice++;
	}
}