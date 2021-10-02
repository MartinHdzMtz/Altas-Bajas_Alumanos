#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio;

void CambiosAlumnos( void ) {
	 int cual;
	 ALUMNOS *qtr;
	 system("cls");
	 printf("\n\n");
	 printf("\t\t         CAMBIOS DE ALUMNOS\n");
	 printf("\t\t===================================\n");
	 printf("\t\t Matricula -> ");
	 scanf("%d", &cual);
	 qtr = Inicio;
	 while( qtr != NULL ) {
		if( qtr->matricula == cual ) {
	        printf("\t\t Nombre: %-38s\n\t\t Nombre -> ", qtr->nombre);
	        scanf(" %[^\n]", qtr->nombre); //%[] CADENA DE CARACTERES ^\n MIENTRAS NO TECLEES UN ENTER
	        printf("\t\t Calificación: %6.2f\n\t\t Calificacion -> ", qtr->calif);
	        scanf(" %f", &qtr->calif);
			return;
		}
		qtr = qtr->sig; // avanzo al siguiente nodo
	}
	return;
}
