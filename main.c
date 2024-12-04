#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

ALUMNOS *Inicio = NULL; // indica que esta vacia la lista

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ALUMNOS *p, *q;
	int opcion = 0;
	float prom;
	if ( CargarArch( argv[1] ) !=0 ) {
	printf("Hubo un error al leer el archivo\n");
	   return -1;
}
	while(opcion >= 0 && opcion < 7) {
		opcion = Menu();
		switch(opcion) {
			case 1: {
                p = GenerarNodo();
                // llamo a la funcion que busca y regresa una direccion de memoria
	            if( p == NULL ) {
	   	            printf("Fallo la funcion malloc\n");
		            return 1; // termina el programa
	            }
	            CargarDatos(p);
	            UbicarNodo(p);
				break;
			}
			case 2: {
				BajaAlumnos();
				break;
			}
			case 3: {
			    CambiosAlumnos();
				break;
			}
			case 4: {
                             ListarLista();
				system("pause");				
				break;
			}
			case 5: {
                prom = Promedio();
                system("cls");
                printf("\n\n\t\t PROMEDIO DE CALIFICACIONES\n");
                printf("\t\t El promedio del grupo es %6.2f\n\n", prom);
                system("pause");
				break;
			}
			case 6: {
                prom = DesvStd();
                system("cls");
                printf("\n\n\t\t DESVIACION ESTANDAR DE CALIFICACIONES\n");
                printf("\t\t La desviación estandar del grupo es %6.2f\n\n", prom);
                system("pause");
				break;
			}
		}
	}
	GravaArch( argv[1] );
	//borrar la lista
	p = Inicio;
	q = p;
	while( q != NULL ) {
		free( p );
		q = q->sig;
		p = q;
	}
	return 0;
}
