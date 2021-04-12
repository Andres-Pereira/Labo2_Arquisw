#pragma once
#include <iostream>
#include <string>

using namespace std;
class Accesorio
{
private:
	string descripcion;
	int precioAccesorio;
	bool disponibilidadAccesorio;
public:
	Accesorio();
	~Accesorio();
	int getPrecio();
	void setPrecio(int precio);
	string getDescripcion();
	void setDescripcion(string descripcion);
	bool getDisponibilidad();
	void setDisponibilidad(bool precio);
	void mostrarAccesorio();

};

Accesorio::Accesorio()
{
}

Accesorio::~Accesorio()
{
}

int Accesorio::getPrecio()
{
	return precioAccesorio;
}

void Accesorio::setPrecio(int precio)
{
	precioAccesorio = precio;
}

string Accesorio::getDescripcion()
{
	return descripcion;
}

void Accesorio::setDescripcion(string descripcion)
{
	descripcion = descripcion;
}

bool Accesorio::getDisponibilidad()
{
	return disponibilidadAccesorio;
}

void Accesorio::setDisponibilidad(bool disponibilidad)
{
	disponibilidadAccesorio = disponibilidad;
}

void Accesorio::mostrarAccesorio() {
	string disponible;
	if (disponibilidadAccesorio == 1) {
		disponible = "Existen unidades";
	}
	else disponible = "No quedan unidades";
	cout << descripcion << "Precio: " << precioAccesorio << " Disponible: " << disponible << endl;
}