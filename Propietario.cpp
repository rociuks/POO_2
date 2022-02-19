#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
    // atributos
    private : string nit; 
			  double cui;

    //contructor
    public :
    pripietario (){
    }

    Propietario(string nom, string ape, string dir,int tel, string fech, string n, double c) : Persona(nom,ape,dir,tel,fech){
        nit = n, ciu = c
    }
    // metodos
    // set (modificar)
    void setNit(string n){nit = n;}
    void setCui(double c){cui = c;}
    void setNombres(string nom){nombres = nom;}
    void setApellidos(string ape){apellidos = ape;}
    void setDireccion(string dir){direccion = dir;}
    void setTelefono(int tel){telefono = tel;}
    void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
    //get (mostrar)
     string getNit(){return nit;}
     string getCiu(){return cui;}
     string getNombres(){return nombres;}
     string getApellidos(){return apellidos;}
     string getDireccion(){return direccion;}
     int getTelefono(){return telefono;}
     string getFecha_nacimiento(){return fecha_nacimiento;}
    // metodos
    void mostrar(){
        cout<<"___"<<endl;
        cout<<nit<<","<<c<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
    }
};
