/*Positivo, negativo o cero*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int num;
	printf("Indica si el numero es positivo, negativo o cero\n");
	printf("Dame el \n");
	scanf("%i",&num);
	if(num==0)
	{
		printf("Es cero\n");
	}
	if(num>0)
	{
		printf("Es positivo\n");
	}
	if(num<0)
	{
		printf("Es negativo\n");
	}
	getch();
	return 0;
}
