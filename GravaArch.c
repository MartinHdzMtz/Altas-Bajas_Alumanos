#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio;

void GravaArch( char* Arch ) {
	FILE *fp;
	ALUMNOS *q; // puntero de apoyo
	fp= fopen( Arch, "wb" );
	if ( fp == NULL ) return;
	q = Inicio;
    while( q != NULL ) {
    	fwrite( q, sizeof( ALUMNOS ), 1, fp );
    	q = q->sig;
       
	}
	fclose ( fp );
	return;	
	
}
