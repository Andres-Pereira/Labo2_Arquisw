#pragma once
#include <iostream>
#include <string>
#include "Accesorio.h"

using namespace std;

class Mascota
{
private:
	Accesorio Accesorios_Mascota[10];
	string raza;
	int edad;
	bool disponibilidad;
	int precio;
	int iterador;
public:
	Mascota();
	~Mascota();
	void mostrarAccesoriosDeMascota();
	string getRaza();
	void setRaza(string raza);
	int getEdad();
	void setEdad(int edad);
	bool getDisponibilidad();
	void setDisponibilidad(bool disponibilidad);
	int getPrecio();
	void setPrecio(int precio);
	void insertarAccesorioNuevo(Accesorio nuevo);
	void mostrarMascota();

};

Mascota::Mascota()
{
	iterador = 0;
}

Mascota::~Mascota()
{

}

string Mascota::getRaza() {
	return raza;
}
void Mascota::setRaza(string raza) {
	this->raza = raza;

}
int Mascota::getEdad() {
	return edad;
}
void Mascota::setEdad(int edad) {
	this->edad = edad;
}
bool Mascota::getDisponibilidad() {
	return disponibilidad;
}
void Mascota::setDisponibilidad(bool disponibilidad) {
	this->disponibilidad = disponibilidad;
}
int Mascota::getPrecio() {
	return precio;
}
void Mascota::setPrecio(int precio) {
	this->precio = precio;
}

void Mascota::insertarAccesorioNuevo(Accesorio nuevo) {
	if (iterador < 10) {
		Accesorios_Mascota[iterador] = nuevo;
		iterador++;
	}
}

void Mascota::mostrarAccesoriosDeMascota() {
	for (int i = 0; i < iterador; i++)
		Accesorios_Mascota[i].mostrarAccesorio();
}

void Mascota::mostrarMascota() {
	string disponible;
	if (disponibilidad == 1) {
		disponible = "si";
	}
	else disponible = "no quedan mas";
	cout << "Raza: " << raza << endl; 
	cout << "Precio: " << precio << endl;
	cout<< "Disponibilidad: " << disponible << endl;
	cout << "Accesorios: " << endl;
	mostrarAccesoriosDeMascota();
}