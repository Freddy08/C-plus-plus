/*MINICALCULADORA*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float a,b;
	system("cls");
	printf("\nTeclea tu primer numero ");
	scanf("%f",&a);
	printf("\nTeclea tu segunda numero ");
	scanf("%f",&b);
	printf("\nLos resultados son: %.2f %.2f %.2f %.2f",a+b,a-b,a*b,a/b);
	getch();
	return 0;
}
