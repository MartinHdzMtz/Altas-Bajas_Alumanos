#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio;

void UbicarNodo(ALUMNOS *ptr) {
	ALUMNOS *qtr;
	if( Inicio == NULL ) {
		Inicio = ptr;
		return;
	}
	qtr = Inicio;
	while( qtr != NULL ) {
//		printf("Direccion qtr = %p, Direcion qtr->sig = %p", qtr, qtr->sig);
		if( qtr->sig == NULL ) {
			qtr->sig = ptr;
//		printf("Direccion qtr = %p, Direcion ptr = %p", qtr, ptr);
//		system("pause");
			return;
		}
		qtr = qtr->sig; // avanzo al siguiente nodo
	}
	return;
}
