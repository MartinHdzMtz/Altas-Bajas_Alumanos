#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

int Menu( void ) {
	int op;
	system("cls");
	printf("\n\n\n");
	printf("\t           M E N U    P R I N C I P A L\n");
	printf("\t=======================================================\n");
	printf("\t 1.- Altas de alumnos\n");
	printf("\t 2.- Bajas de alumnos\n");
	printf("\t 3.- Cambios en alumnos\n");
	printf("\t 4.- Consulta de alumnos\n");
	printf("\t 5.- Calcular promedio de calificaciones\n");
	printf("\t 6.- Calcular la desviación estandar en calificaciones\n");
	printf("\t 7.- Salir\n\n");
	printf("\t     Opcon deseada -> ");
	scanf("%d", &op);
	return op;
}
