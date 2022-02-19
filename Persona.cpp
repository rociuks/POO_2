#include <iostream>
using namespace std;

class Persona{
	//atributos
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
	// constructo
	protected :
			Persona(){
			}
			Persona(string nom, string ape, string dir, int tel, string fech){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				fecha_nacimiento = fech;
			}
			
	//metodo
	void mostrar();
};
