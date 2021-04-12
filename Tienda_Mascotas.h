#pragma once
#include"ListaMascotas.h"

class Tienda_Mascotas
{
private:
	ListaMascotas* L;
	int numero;
	string nombreTienda;
	string direccion;

public:
	Tienda_Mascotas(int tam);
	~Tienda_Mascotas();
	void setNombre(string nombre);
	void setNumero(int numero);
	void setDireccion(string direccion);
	void mostrarTienda();
	void insertarMascota(Mascota A);

};

Tienda_Mascotas::Tienda_Mascotas(int tam)
{
	L = new ListaMascotas(tam);
}

Tienda_Mascotas::~Tienda_Mascotas()
{
}

void Tienda_Mascotas::setNombre(string nom) {
	nombreTienda = nom;
}
void Tienda_Mascotas::setNumero(int num) {
	numero = num;
}
void Tienda_Mascotas::setDireccion(string dir) {
	direccion = dir;
}

void Tienda_Mascotas::mostrarTienda() {
	cout << "Tienda de mascotas " << nombreTienda << endl;
	cout << "Telefono: " << numero << " Direccion: " << direccion << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Mascotas disponibles: " << endl;
	L->mostrarLista();

}
void Tienda_Mascotas::insertarMascota(Mascota A) {
	L->insertarMascota(A);
}