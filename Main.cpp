#include <iostream>
using namespace std;
#include "Accesorio.h"
#include "Mascota.h"
#include "ListaMascotas.h"
#include "Tienda_Mascotas.h"
#include "Mamifero.h"


//Herencia multiple, hereda de mamifero y de Mascota
class Perro : public Mamifero, public Mascota {
public:
	Perro() {
	}
	~Perro() {
	}
	void mostrarTipoDePelaje() {
		cout << "Pelaje canino grueso " << endl;
	}
};

class Gato : public Mamifero, public Mascota {
public:
	Gato() {
	}
	~Gato() {
	}
	void mostrarTipoDePelaje() {
		cout << "Pelaje de felino fino " << endl;
	}
};

//Podemos crear una mascota que hereda de la clase Mascota sin ser un mamifero

class Pez : public Mascota {
public:
	Pez() {
	}
	~Pez() {
	}
};



int main() {
	//Hardcode de prueba (ignorar)

	Accesorio CorreaCanina;
	CorreaCanina.setDescripcion("Correa para pasear al perro (regulable)");
	CorreaCanina.setDisponibilidad(true);
	CorreaCanina.setPrecio(80);
	
	Accesorio AbrigodeGato;
	AbrigodeGato.setDescripcion("Abrigo para gatos adultos");
	AbrigodeGato.setDisponibilidad(true);
	AbrigodeGato.setPrecio(100);

	Accesorio Comidapez;
	Comidapez.setDescripcion("Comida viva de pulga marina");
	Comidapez.setDisponibilidad(true);
	Comidapez.setPrecio(35);


	Perro Bulldog;
	Bulldog.setDisponibilidad(true);
	Bulldog.setEdad(1);
	Bulldog.setPrecio(3500);
	Bulldog.setRaza("Bulldog");
	Bulldog.insertarAccesorioNuevo(CorreaCanina);

	Gato Esfinge;
	Esfinge.setDisponibilidad(true);
	Esfinge.setEdad(3);
	Esfinge.setPrecio(2400);
	Esfinge.setRaza("Esfinge");
	Esfinge.insertarAccesorioNuevo(AbrigodeGato);
	
	Pez Goldfish;
	Goldfish.setDisponibilidad(true);
	Goldfish.setEdad(1);
	Goldfish.setPrecio(40);
	Goldfish.setRaza("Goldfish");
	Goldfish.insertarAccesorioNuevo(Comidapez);


	Tienda_Mascotas Tienda(5);
	Tienda.setDireccion("Melchor Urquidi y America");
	Tienda.setNombre("PetFriend");
	Tienda.setNumero(77972667);
	Tienda.insertarMascota(Bulldog);
	Tienda.insertarMascota(Esfinge);
	Tienda.insertarMascota(Goldfish);
	

	Tienda.mostrarTienda();
	cout << "-----------------------------------------------" << endl;
	getchar();
	return 0;
}