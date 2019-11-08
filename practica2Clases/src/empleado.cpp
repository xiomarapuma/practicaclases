#include <stdio.h>
#include "D:/CLASES/practica2Clases/include/empleado.h"
/*
empleado::empleado(char *x, char *y , double z){
    this -> nombre= x;
    this -> apellido =y;
    this -> salario=z;

}
*/
empleado::empleado(){

}

void empleado::SetDatos(){
	char *nombre=new char[20], *apellido=new char[20];
	double salario ;
	cout << endl << "Ingrese nombre : " ;
	fflush(stdin);
	fgets(nombre,20,stdin);
	cout << "Ingrese sus apellidos : " ;
	fflush(stdin);
	fgets(apellido,20,stdin);
	cout << "Ingrese su salario: " ;
	cin >> salario ;

	SetNombre(nombre);SetApellido(apellido);SetSalario(salario);
}
/*
double empleado::GetSalario(double salario ){
    salario = double n ;
    if(n<0)
        return 0;
    else
        return n ;
}
*/
void empleado::mostrarEmpleado(){
    cout <<endl << "NOMBRE: " << nombre  ;
    cout << "APELLIDO: " << apellido  ;
    cout << "SALARIO POR MES: " << salario ;

}
double empleado::SalarioAnual(){
    double anual,sueldototal;
    anual=salario*12;
    cout << "SALARIO ANUAL : " << anual << endl ;
    sueldototal= anual-(anual*0.10);
    cout << "SUELDO FINAL : " << sueldototal<< endl ;
    cout << " ----------------------------------------------";

}
/*
void empleado::OrdenarNombres(){

}
/*
empleado::~empleado()
{
    //dtor
}
*/
