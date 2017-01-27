#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char rescor[5];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	int ciclo=0,ex;
	printf("\tInicia el calificado de los examenes\n");
	printf("Introduce la cadena de respuestas correctas:\n");
	for(;ciclo<5;ciclo++)
	{
		et1:
			
		printf("%d: ",ciclo+1);
		gets(rescor);
		if(strlen(rescor)>1)
		{
			printf("No puede introducir mas de dos respuestas\n");
			printf("vuelva a intentar de nuevo\n");
			goto et1;
		}
	}
	printf("Indicar el numero de exmanes a calificar: ",ex);
	scanf("%d",&ex);
	if(ex<10)
	{
			struct{		
				char alumnos[8];
				char matricula[8];
				char resalum[6];
		    } registro;
			FILE *fichero;
			if((fichero = fopen("datos.txt","w")) == NULL)
			{
				printf("Error de apertura del archivo, vuelva a intenar");
			}
			do{
				printf("alumno\n"); 
				gets(registro.alumnos);
			//	if(strcmp(registro.alumnos,""))
			//	{
				    et2:
					puts("matricula: "); 
					gets(registro.matricula);
					if(strlen(registro.matricula)>7)
					{
						printf("No se permite mas de 7 caracteres para la matricula");
						goto et2;
					}
					et3:
					puts("cadena de respuestas: "); 
					gets(registro.resalum);
					if(strlen(registro.matricula)<5)
					{
						printf("No se permite mas de 5 respuestas");
						goto et3;
					}
					fwrite ( &registro, sizeof(registro), 1, fichero);
				
			}while ( strcmp(registro.alumnos,"") !=0 );
	fclose(fichero);
	}
}
