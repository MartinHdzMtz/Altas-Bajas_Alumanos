#include <stdio.h>
#include <stdlib.h>
#include "ListaV.h"

void CargarDatos(ALUMNOS *ptr) {
	 system("cls");
	 printf("\n\n\n");
	 printf("\t\t          ALTAS DE ALUMNOS\n");
	 printf("\t\t===================================\n");
	 printf("\t\t Matricula -> ");
	 scanf("%d", &ptr->matricula);
	 printf("\t\t Nombre -> ");
	 scanf(" %[^\n]", ptr->nombre); //%[] CADENA DE CARACTERES ^\n MIENTRAS NO TECLEES UN ENTER
	 printf("\t\t Calificación -> ");
	 scanf(" %f", &ptr->calif);
	 ptr->activo = 0; // se pone en activo al darse de alta
	 ptr->sig = NULL; // para indicar que este es el último generado
     return;	 
}
