#ifndef _ECABEZADO_H
#define _ENCABEZADO_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <math.h>
#define ing cin
#define ver cout
#define pos gotoxy
#define limpiar() system ("cls")
#define stop _getch
using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = (SHORT)x - 1;
	coord.Y = (SHORT)y - 1;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
#endif


