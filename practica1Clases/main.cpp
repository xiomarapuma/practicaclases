#include <iostream>
#include "estudiante.h"
#include <stdlib.h>
#include "conio.h"
using namespace std;

int main()
{
    estudiante persona1[1];
	//empleado p2[20];
	persona1[1].SetDatos();
	persona1[1].mostrarEstudiante();

	estudiante persona2[1];
	//empleado p2[20];
	persona2[1].SetDatos();
	persona2[1].mostrarEstudiante();
}
