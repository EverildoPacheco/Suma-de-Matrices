#include "encabezado.h"
int  f, c;
int A[100][100], B[100][100];

void main()
{
    system("color 80");
	pos(40, 2); ver << ":::::Suma de Matrices:::::";
	pos(20, 4);  ver << "Ingrese numero de Filas: "; ing >> f;
	pos(20, 5);  ver << "Ingrese numero de Columnas: "; ing >> c;
	// ingreasmos los valorees y guardamos de la matric A
	limpiar();
	pos(40, 2); ver << ":::::Suma de Matrices::::::";
	pos(1, 4);  ver << ":::::::::::::::::::::::::::";
	pos(1, 5);  ver << "Ingreso de Valores Matriz A";
	ver << "\n";
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			 ver << "Ingrese valor: "; ing >> A[i][j];
		}
	}
	// ingreasmos los valorees y guardamos de la matric B
	limpiar();
	pos(40, 2); ver << ":::::Suma de Matrices:::::";
	pos(1, 4); ver << "::::::::::::::::::::::::::::";
	pos(1, 5); ver << "Ingreso de Valores Matriz B";
	ver << "\n";
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			ver << "Ingrese valor: "; ing >> B[i][j];
		}
	}
	stop();

	limpiar();
	// mostrasmos los datos de la ma matris A
	pos(3, 0); ver << ":::::Matriz A::::: ";
	ver << "\n";
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			pos(6, 0); ver << A[i][j] << " ";
		}
		ver << "\n";
	}

	ver << "\n";
	// mostrasmos los datos de la ma matris B
	pos(3, 0); ver << ":::::Matriz B::::: ";
	ver << "\n";
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			pos(6, 0); ver << B[i][j] << " ";
		}
		ver << "\n";
	}
	//Mostramos resultados y se opera los ingresados 
	system("color b0");
	ver << "\n";
	ver << "::La suma de las matrices A y B::";
	ver << "\n";
	ver << "\n";
	ver << ":::::::::::::::::::::::::::::::::";
	ver << "\n";
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			ver << A[i][j] + B[i][j] << " ";
		}
		ver << "\n";
	}
	ver << ":::::::::::::::::::::::::::::::::";
	ver << endl;
	ver << endl;
	ver << "Gracias por usar sumas de matrices JJM";
	stop();
}