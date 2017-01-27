/*Positivo, negativo o cero*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int num;
	printf("Indica si el numero es positivo, negativo o cero\n");
	printf("Dame el numero\n");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Es cero\n");
	}
	if(num>0)
	{
		printf("Es positivo\n");
	}else
	{
		printf("Es negativo\n");
	}
	getch();
	return 0;
}
