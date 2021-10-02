#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio;

void ListarLista( void ) {
	ALUMNOS *qtr; // puntero de apoyo
	system("cls");
	printf("\t               LISTA DE ALUMNOS\n");
	printf("\tMatricula Nombre                                 Calif.\n");
	printf("\t========= ====================================== ======\n");
	qtr = Inicio;
    while( qtr != NULL ) {
    	if( qtr->activo == 0 ) {
			printf("\t%-9d %-38s %6.2f\n", qtr->matricula, qtr->nombre, qtr->calif);
		}
		qtr = qtr->sig;	
	}
	return;	
	
}
