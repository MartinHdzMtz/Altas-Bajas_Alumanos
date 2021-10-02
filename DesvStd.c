#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ListaV.h"

ALUMNOS *Inicio;

float DesvStd( void ) {
	ALUMNOS *qtr; // puntero de apoyo
	int cuantos = 0;
	float Suma = 0.0, prom, DifalCuadrado = 0.0; 
	qtr = Inicio;
    while( qtr != NULL ) {
    	if( qtr->activo == 0 ) {
			Suma = Suma + qtr->calif;
			cuantos++; 
		}
		qtr = qtr->sig;	
	}
	prom = ( Suma / cuantos );
	qtr = Inicio;
    while( qtr != NULL ) {
    	if( qtr->activo == 0 ) {
			DifalCuadrado = DifalCuadrado + pow((qtr->calif - prom), 2);
		}
		qtr = qtr->sig;	
	}
	DifalCuadrado = DifalCuadrado / ( cuantos - 1);	
	return( sqrt(DifalCuadrado) );		
}
