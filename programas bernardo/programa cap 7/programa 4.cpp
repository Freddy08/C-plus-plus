#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int j;
	struct nombre_com
	{
		char nombre[30];
		char apellidopat[15];
		char apellidomat[15];
	};
	struct agenda
	{
		struct nombre_com nombrec;
		int calificacion[3];
		float estatura;
	}alumno;
	/*inicializar*/
	alumno.nombrec.nombre[0]='\0';
	alumno.nombrec.apellidopat[0]='\0';
	alumno.nombrec.apellidomat[0]='\0';
	for(j=0;j<3;j++)
	{
		alumno.calificacion[j]=0;
	}
	alumno.estatura=0;
	/*agregar un elemento*/
	printf("\ndame el nombre ");
	scanf("%s",&alumno.nombrec.nombre);
	printf("\napellido paterno ");
	scanf("%s",&alumno.nombrec.apellidopat);
	printf("\napellido materno ");
	scanf("%s",&alumno.nombrec.apellidomat);
	for(j=0;j<3;j++)
	{
		printf("dame la calificacion %d ",j+1);
		scanf("%d",&alumno.calificacion[j]);
	}
	printf("dame la estatura ");
	scanf("%f",&alumno.estatura);
	/*imprimir*/
	printf("%s",alumno.nombrec.nombre);
	printf("%s",alumno.nombrec.apellidopat);
	printf("%s",alumno.nombrec.apellidomat);
	for(j=0;j<3;j++)
	{
		printf("\t%8d",alumno.calificacion[j]);
	}
	printf("\t%.2f",alumno.estatura);
	getch();
	return 0;
}
