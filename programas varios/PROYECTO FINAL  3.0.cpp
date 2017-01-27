#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char rescor[5];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	int ciclo=0,ex;
	char alumnos[8],matricula[8],resalum[6];
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
	et2:
	printf("Indicar el numero de exmanes a calificar: ",ex);
	scanf("%d",&ex);
	if(ex<10)
	{
		for(ciclo=0;ciclo<ex;ciclo++)
		{
			FILE*flujo = freopen("alumnos.txt","w",stdout);
			if(flujo == NULL)
			{
				perror("El archivo no se abrio correctamente");			
			}else{
				printf("alumno");
				while(!feof(stdin))
				{
		   		 	fprintf(flujo,"%s",alumnos);
	    			gets(alumnos);
				}
			fclose(flujo);
			}
	    }
	}else{
		printf("no se puede ingresar mas de 10 examenes\n");
		printf("vuelva a intentar\n");
		goto et2;
	}
	printf("Inicia el calificado de los examenes....\n");
	/*for(ciclo=0;ciclo<ex;ciclo++)
	{
		if(strcmp(resalum)==0)
		{
			
		}
	}*/
getch();

}
