#pragma once
#include <iostream>
#include <fstream>
#include "colors.h"

enum Casilla {VACIA, ROJA, AMARILLA};

Casilla charToEnum(char n);
void muestraColor(Casilla casilla);