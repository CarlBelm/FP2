#include "Casilla.h"
#include "colors.h"

using namespace std;

Casilla charToEnum(char n) {
	Casilla casilla = VACIA;
	switch (n) {
	case '0': { 
		casilla = ROJA; 
		break;
	}
	case 'X': { 
		casilla = AMARILLA; 
		break;
	}
	}
	return casilla;
}

void muestraColor(Casilla casilla) {
	char esp = '  ';
	switch (casilla) {
	case ROJA: {
		cout << BG_RED << esp << RESET;
		break;
	}
	case AMARILLA: {
		cout << BG_YELLOW << esp << RESET;
		break;
	}
	case VACIA: {
		cout << esp << RESET;
		break;
	}
	}
}
