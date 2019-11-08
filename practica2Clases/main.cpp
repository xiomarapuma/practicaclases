#include <iostream>

#include <stdlib.h>
#include "conio.h"
#include "D:/CLASES/practica2Clases/include/empleado.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std ;
int main()
{
	// creacion del objeto
	empleado p1[1];
	//empleado p2[20];
	p1[1].SetDatos();
	p1[1].mostrarEmpleado();
	cout << endl ;
	p1[1].SalarioAnual();


	empleado p2[1];
	p2[1].SetDatos();
	p2[1].mostrarEmpleado();
	cout << endl ;
	p2[1].SalarioAnual();


	_getch();
}
