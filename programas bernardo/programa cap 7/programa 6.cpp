#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
	char nombre[30];
	char apellidopat[15];
	char apellidomat[15];
}Nombre_com;
typedef struct
{
	Nombre_com nombrec;
	int calificacion[3];
	float estatura;
}Alumno;
main()
{
	int i,j,n;
	Alumno lAlumno[MAX];
	/*inicializar*/
	for(i=0;i<MAX;i++)
	{
		lAlumno[i].nombrec.nombre[0]='\0';
		lAlumno[i].nombrec.apellidopat[0]='\0';
		lAlumno[i].nombrec.apellidomat[0]='\0';
		for(j=0;j<3;j++)
		{
			lAlumno[i].calificacion[j]=0;
			lAlumno[i].estatura=0;
		}
	}
	/*agregar elementos*/
	i=0;
	printf("\n Cuantos elementos se insertaran \t");
	scanf("%d",&n);
	while(i<n)
	{
		printf("\ndame el nombre %d ",i+1);
		scanf("%s",&lAlumno[i].nombrec.nombre);
		printf("\napellido paterno %d ",i+1);
		scanf("%s",&lAlumno[i].nombrec.apellidopat);
		printf("\napellido materno %d ",i+1);
		scanf("%s",&lAlumno[i].nombrec.apellidomat);
		for(j=0;j<3;j++)
		{
			printf("dame la calificacion %d ",j+1);
			scanf("%s",&lAlumno[i].calificacion);
		}
	printf("dame la estatura  ",i+1);
	scanf("%s",&lAlumno[i].estatura);
	i++;
	}
	/*imprimir*/
	printf("\nombre\t\tcalificacion 1\tcalificacion 2\tcalificacion 3\testatura\n\n");
	for(i=0;i<n;i++)
	{
	  printf(" %s",lAlumno[i].nombrec.nombre);
	  printf(" %s",lAlumno[i].nombrec.apellidopat);
	  printf(" %s",lAlumno[i].nombrec.apellidomat);
	  for(j=0;j<3;j++)
	  {
	  	printf("\t%8d",lAlumno[i].calificacion[j]);
	  }
	printf("\t%.2f",lAlumno[i].estatura);
	}
	getch();
	return 0;
}
