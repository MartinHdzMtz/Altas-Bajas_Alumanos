#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio;

void BajaAlumnos( void ) {
	 int cual;
	 ALUMNOS *qtr;
	 system("cls");
	 printf("\n\n");
	 printf("\t\t          BAJAS DE ALUMNOS\n");
	 printf("\t\t===================================\n");
	 printf("\t\t Matricula -> ");
	 scanf("%d", &cual);
	 qtr = Inicio;
	 while( qtr != NULL ) {
		if( qtr->matricula == cual ) {
			qtr->activo = 1;
			return;
		}
		qtr = qtr->sig; // avanzo al siguiente nodo
	}
	return;
}
