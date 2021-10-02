#ifndef _LISTAV_
#define _LISTAV_

typedef struct nodo {
// parte info del nodo
	int matricula;
	char nombre[40];
	float calif;
	int   activo; // campo lógico 0 = Activo, 1 = Baja logica
// parte next del nodo
    struct nodo *sig;
} ALUMNOS;

// prototipos de las funciones de mi proyecto
ALUMNOS* GenerarNodo( void );
void CargarDatos(ALUMNOS*);
void UbicarNodo(ALUMNOS*);
void ListarLista( void ); 
int Menu( void );
void BajaAlumnos( void );
void CambiosAlumnos( void );
float Promedio( void );
float DesvStd( void );
void GravaArch( char* );
int CargarArch( char* ); 



#endif
