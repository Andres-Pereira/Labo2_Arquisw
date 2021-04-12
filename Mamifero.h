#pragma once
#include "Mascota.h"

class Mamifero
{
private:
	string tipoDePelaje;
public:
	Mamifero();
	~Mamifero();
	void setPelaje(string pelaje);
	void virtual mostrarTipoDePelaje() = 0;

};

Mamifero::Mamifero()
{
}

Mamifero::~Mamifero()
{
}

void Mamifero::setPelaje(string pelaje) {
	tipoDePelaje = pelaje;
}