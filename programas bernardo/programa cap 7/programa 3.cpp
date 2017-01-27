#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
main()
{
	struct
	{
		char nombre[30];
		int calificacion[3];
	}alumno[MAX];
	system("cls");
	int i,j,n;
	/*inicializar*/
	for(i=0;i<MAX;i++)
	{
		alumno[i].nombre[0]='\0';
		for(j=0;j<3;j++)
		{
			alumno[i].calificacion[j]=0;
		}
	}
	/*agregar elementos*/
	i=0;
	printf("\n cuantos elementos se insetaran \t");
	scanf("%d",&n);
	while(i<n)
	{
		printf("\ndame el nombre %d",i+1);
		scanf("%s",&alumno[i].nombre[0]);
		for(j=0;j<3;j++)
		{
			printf("dame la calificacion %d",j+1);
			scanf("%d",&alumno[i].calificacion[j]);
		}
	i++;
	}
	/*imprimir*/
	printf("\n\tnombre\t\tcalificacion 1\tcalificacion 2\tcalificacion 3\n\n");
    for(i=0;i<n;i++)
    {
    	printf("\t %s ",alumno[i].nombre);
    	for(j=0;j<3;j++)
    	{
    	   printf("\t%10d",alumno[i].calificacion[j]);
    	}
    printf("\n");
    }
    getch();
	return 0;
}
