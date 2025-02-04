#include "Matriz.h"

using namespace std;



void mostrarTablero(Tablero& tablero) {
	int m = 0;
	for (int n = 0; n < tablero.nFilas*2 + 1; n++) {
		if (n % 2 == 0)cout << "-+";
		else { 
			cout << " |"; 
			m++;
		}
		for (int i = 0; i < tablero.nColumnas; i++) {
			if (n % 2 == 0) {
				cout << "--+";
			}
			else {
				muestraColor(charToEnum(tablero.datosMatriz[n][m-1]));
				cout << " |";
			}
		}
		cout << endl;
	}
}

istream& operator>>(istream& archivo, Tablero& tablero) {
	archivo >> tablero.nFilas >> tablero.nColumnas;
	for (int fila = 0; fila < tablero.nFilas; fila++) {
		for (int columna = 0; columna < tablero.nColumnas; columna++) {
			archivo >> tablero.datosMatriz[fila][columna];
		}
	}
	return archivo;
}