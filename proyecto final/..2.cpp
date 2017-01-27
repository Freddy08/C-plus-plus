#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char rescor[5];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	int ciclo=0,a=0,ex=0;
	FILE *pf; 
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
	et4:
	printf("Indicar el numero de exmanes a calificar: ",ex);
	scanf("%d",&ex);
	if(ex<10)
	{
    pf = fopen("texto.txt","w"); 
    for (;a<ex;a++) 
    { 
        et2:
        printf("Matricula: \n"); 
        scanf("%s",&matricula);
        if(strlen(matricula)==7)
        { 
            fprintf(pf,"%s\n",matricula);
        }else{
            printf(" No se puede ingresar mas de 7 caracteres para la matricula\n");
            goto et2;
        }
        et3:
        printf("Cadena de respuestas correctas: \n"); 
        scanf("%s",&cadena); 
        if(strlen(cadena)==5)
        { 
             fprintf(pf,"%s\n",cadena);
        }else{
             printf(" No se puede ingresar mas de 5 cacteres para las respuestas \n");
             goto et3;
        }
     }
    }
    printf("resultado\n\n");
    for(ciclo=0;ciclo<10;ciclo++)
    if ( strcmp( rescor, cadena ) != 0 );
    {
         printf("%s , %s", matricula, cadena);
    } 
    


    /*printf("resultado\n\n");
    FILE *resu;
	resu = fopen("texto.txt","rb");
	if(resu == NULL)
	{
		perror("Se abrio incorrectamente el archivo");
		return 1;
	}
	fseek(resu, 0, SEEK_END);
	int num_elementos = ftell(resu);
	rewind(resu);
	char *mos= (char *) calloc(sizeof(char), num_elementos);
	if(mos == NULL)
	{
		perror("Error en la reserva de memoria");
		return 2;
	}
	int num_elementos_leidos = fread(mos, sizeof(char), num_elementos,resu);
	if(num_elementos_leidos != num_elementos)
	{
		perror("Error leyendo el archivo");
		return 3;
	}
	printf("%s", mos);
	free(mos);
	fclose(resu);
	printf("\nbueno");*/
	
	
getch();

}
