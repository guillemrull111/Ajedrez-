#include <iostream>
#include "Const.h"


void InicializarTablero(char tablero[FILA][COLUMNA]) {

	for (int i = 0; i < FILA; i++)
	{
		for (int j = 0; j < COLUMNA; j++)
		{
			tablero[FILA][COLUMNA] = '*';
		}
	}
}

void ImprimirTablero(char yablero[FILA][COLUMNA]) {


}