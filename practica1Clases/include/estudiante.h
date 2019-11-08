#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
using namespace std;

class estudiante
{
    public:
        estudiante(); //constructor
		estudiante (char *nombre ,char *apellido , char *codigo){
			SetNombre(nombre);
			SetApellido(apellido);
			SetCodigo(codigo);
		}
		//Metodos modificadores
		void SetNombre(char *n){nombre=n;}
		void SetApellido(char *p){apellido=p;}
		void SetCodigo(char *c){codigo=c;}
		void SetDatos();
		void mostrarEstudiante();



    private:
        char * nombre;
        char * apellido;
        char * codigo;
};

#endif // ESTUDIANTE_H
