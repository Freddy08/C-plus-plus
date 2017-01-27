#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char rescor[5];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	int ciclo=0,ex=0;
	char cadena[6],matricula[7];
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
	printf("Indicar el numero de examenes a calificar: ");
	scanf("%d",&ex);
	if(ex<10)
	{
		     ciclo=1;
	         et4:  
             printf("alumno %d\n",ciclo);
             et2:
             printf("Matricula: ");
             scanf("%s",&matricula);
             if(strlen(matricula)>6 != strlen(matricula)<8)
             {
                printf("no se puede introducir menos o mas de 7 caracteres para la matricula\n");
                goto et2;
             }
             et3:
             printf("Cadena de respuestas: ");
             scanf("%s",&cadena);
             if(strlen(cadena)>4 != strlen(cadena)<6)
             {
                printf("no se puede introducir menos o mas de 5 caracteres para las respuestas\n");
                goto et3;
             }
			 if(ciclo < ex)
			 {
			 	 ciclo++;
			 	 goto et4;
			 }else if( ciclo == ex)
			 {
			 	goto et5;
			 }
			    
    }
    et5:
    printf("resultado\n\n");
    for(ciclo=0;ciclo<10;ciclo++)
    if ( strcmp(rescor ,cadena) == 0 );
    {
         printf("%s - %s", matricula, cadena );
    } 
 getch();
}
