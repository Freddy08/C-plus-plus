/*Aprobo o reprobo*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float cal1,cal2,cal3,prom;
	printf("Dame la calificacion del primer examen parcial");
	scanf("%f",&cal1);
	printf("Dame la calificacion del segundo examen parcial");
	scanf("%f",&cal2);
	printf("Dame la calificacion del tercer examen parcial");
	scanf("%f",&cal3);
	prom=(cal1+cal2+cal3)/3;
	if(prom >= 6)
	{
		printf("Aprobado con %f",prom);
	}else
	{
		printf("Reprobo con %f",prom);
	}
	getch();
	return 0;
}
