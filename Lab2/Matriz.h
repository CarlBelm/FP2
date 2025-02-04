#pragma once
#include "Casilla.h"

const int FILAS = 20;
const int COLUMNAS = 20;

using arrayMatriz = char[FILAS][COLUMNAS];

struct Tablero {
	arrayMatriz datosMatriz;
	int nFilas;
	int nColumnas;
};

void mostrarTablero(Tablero& tablero);
std::istream& operator>>(std::istream& archivo, Tablero& tablero);