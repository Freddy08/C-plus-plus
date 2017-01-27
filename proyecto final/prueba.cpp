#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *fichero;
	char texto[100];

	fichero = fopen("destino.txt","w");
	if (fichero == NULL) {
		printf( "No se puede crear el fichero.\n" );
		exit( 1 );
	}
	/* Escribe en el fichero */
	fputs("alumno\n", fichero);
	
	fputs("matricula\n", fichero);
	fputs("cadena de respuestas: \n", fichero);

	if (fclose(fichero)!=0)
		printf( "Problemas al cerrar el fichero\n" );

	fichero = fopen("destino.txt","r");
	if (fichero == NULL) {
		printf( "No se puede crear el fichero.\n" );
		exit( 1 );
	}
	printf( "Contenido del fichero:\n" );
	fgets(texto,100,fichero);
	while (feof(fichero) == 0) {
		printf( "%s",texto );
		fgets(texto,100,fichero);
	}

	if (fclose(fichero)!=0)
		printf( "Problemas al cerrar el fichero\n" );
}

