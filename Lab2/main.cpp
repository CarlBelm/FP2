#include "Matriz.h"

using namespace std;

int main() {
	Tablero tablero;
	ifstream archivo;
	archivo.open("tablero.txt");
	archivo >> tablero;
	mostrarTablero(tablero);
}