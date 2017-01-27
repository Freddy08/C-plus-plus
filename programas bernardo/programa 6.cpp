/* Programa para promediar 4 numeros*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float a,b,c,d,tot;
	system("cls");
	printf("Inserte el 1er numero a promediar \n\n\a");
	scanf("%f",&a);
	printf("Inserte el 2er numero a promediar \n\n\a");
	scanf("%f",&b);
	printf("Inserte el 3er numero a promediar \n\n\a");
	scanf("%f",&c);
	printf("Inserte el 4to numero a promediar \n\n\a");
	scanf("%f",&d);
	tot=(a+b+c+d)/4;
	printf("El promedio es %.2f",tot);
	getch();
	return 0;
}
