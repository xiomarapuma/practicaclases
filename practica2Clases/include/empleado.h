#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std ;

class empleado{
	private:
		char* nombre ;
		char* apellido ;
		double salario ;


	public:
		empleado(); //constructor
		empleado (char *nombre ,char *apellido , double salario){
			SetNombre(nombre);
			SetApellido(apellido);
			SetSalario(salario);
		}
		//Metodos modificadores
		void SetNombre(char *n){nombre=n;}
		void SetApellido(char *p){apellido=p;}
		void SetSalario(double  sa){salario=sa;}
		void SetDatos();
		int  NegSalario();
		void mostrarEmpleado();
        double SalarioAnual();
		char * GetNombre(){return nombre;}
		char * GetApellido(){return apellido;}
        double GetSalario(double ) ;
		void empleadoprint();



};
#endif // EMPLEADO_H
