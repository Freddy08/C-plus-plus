/*Area de un trapecio*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float b,B,h,r;
	system("cls");
	printf("Inserte la medida de la base menor\n");
	scanf("%f",&b);
	printf("Inserte la medida de la base mayor\n");
	scanf("%f",&B);
	printf("Inserte la altura de su trapecio\n");
	scanf("%f",&h);
	r=(b+B)*h/2;
	printf("El area de su trapecio es %.2f",r);
	getch();
	return 0;
}
