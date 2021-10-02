#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaV.h"

ALUMNOS *Inicio;

int CargarArch( char* Arch ) {
	FILE *fp; //puntero al buffer donde se carga el archivo
	ALUMNOS q, *p;
	fp = fopen ( Arch, "rb" ); //Abrir en formato de lectura binaria
	if ( fp == NULL ) {
		fclose( fp );
		return (0);
		}
		rewind ( fp );
	    while (1) {
		fread( &q, sizeof(ALUMNOS), 1, fp );
		if ( feof ( fp ) ) {
			return 0;
		}
		p = GenerarNodo();
		p->matricula = q.matricula;
		strcpy( p->nombre, q.nombre);
		p->calif = q.calif;
		p->activo = q.activo;
		p->sig = NULL;
		UbicarNodo(p);
	}
	return 0;
	
	}
