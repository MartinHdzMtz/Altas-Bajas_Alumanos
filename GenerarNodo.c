#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS* GenerarNodo( void ) {
	ALUMNOS *ptr;
	ptr = (ALUMNOS*)malloc(sizeof(ALUMNOS));
	return ptr;
}
