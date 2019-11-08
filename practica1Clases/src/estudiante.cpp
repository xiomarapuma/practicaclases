#include "estudiante.h"
#include <stdio.h>
estudiante::estudiante()
{
    //ctor
}
void estudiante::SetDatos(){
	char *nombre=new char[20], *apellido=new char[20];
	char *codigo= new char[10] ;
	cout << "Ingrese nombre : " ;
	fflush(stdin);
	fgets(nombre,20,stdin);
	cout << "Ingrese sus apellidos : " ;
	fflush(stdin);
	fgets(apellido,20,stdin);
	cout << "Ingrese su codigo: " ;
	fflush(stdin);
	fgets(codigo,10,stdin);
	SetNombre(nombre);SetApellido(apellido);SetCodigo(codigo);
}
void estudiante::mostrarEstudiante(){
    cout << "---------------------------------------" << endl ;
    cout << "NOMBRE: " << nombre ;
    cout << "APELLIDO: " << apellido  ;
    cout << "CODIGO: " << codigo  ;
    cout << "---------------------------------------" << endl ;
}
