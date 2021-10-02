#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio;

float Promedio( void ) {
	ALUMNOS *qtr; // puntero de apoyo
	int cuantos = 0;
	float Suma = 0.0; 
	qtr = Inicio;
    while( qtr != NULL ) {
    	if( qtr->activo == 0 ) {
			Suma = Suma + qtr->calif;
			cuantos++; 
		}
		qtr = qtr->sig;	
	}
	return( Suma / cuantos );		
}
