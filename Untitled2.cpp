#include<stdio.h>
#include<conio.h>
main()
{
	int uni[10],uni2[10],ciclo=0;
	int *apunta1;
	int *apunta2;
	apunta1=uni;
	apunta2=uni2;
	printf("\tempezar el llenado del primer arreglo\n");
	for(ciclo=0;ciclo<10;ciclo++)
	{
		printf("dato %d: ",ciclo+1);
		scanf("%d",&uni[ciclo]);
	}
	printf("\tcomienza el llenado del segundo arreglo\n");
	for(ciclo=0;ciclo<10;ciclo++)
	{
		printf("dato %d: ",ciclo+1);
		scanf("%d",&uni[ciclo]);
	}
	printf("\n\nComparacion entre ambos arreglos\n");
	for(ciclo=0;ciclo<10;ciclo++)
	{
		if(*apunta1<*apunta2)
		{
			printf("El elemento mayor es: el segundo arreglo\n");
		}else if(*apunta1>*apunta2)
		{
			printf("El elemento mayor es: el primer arreglo\n");
		}else if(*apunta1==*apunta2)
		{
			printf("Los elementos estan empatados\n");
		}
		apunta1++;
		apunta2++;
	}
getch();
}
