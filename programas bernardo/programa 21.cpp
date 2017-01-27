/*Calculadora*/
#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,op;
	float z;
	printf("Calculadora basica elige la operacion a realizar\n");
	printf("1=suma, 2=resta, 3=multiplicacion, 4=divicion\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Suma\n");
			printf("Teclea el primer \n");
			scanf("%i",&x);
			printf("Teclea el segundo \n");
			scanf("%i",&y);
			z=x+y;
			printf("La suma es %f",z);
			break;
		case 2:
			printf("Resta\n");
			printf("Teclea el primer \n");
			scanf("%i",&x);
			printf("Teclea el segundo \n");
			scanf("%i",&y);
			z=x-y;
			printf("La resta es %f",z);
			break;
		case 3:
			printf("Multiplicacion\n");
			printf("Teclea el primer \n");
			scanf("%i",&x);
			printf("Teclea el segundo \n");
			scanf("%i",&y);
			z=x*y;
			printf("La Multiplicacion es %f",z);
			break;
		case 4:
			printf("Divicion\n");
			printf("Teclea el primer \n");
			scanf("%i",&x);
			printf("Teclea el segundo \n");
			scanf("%i",&y);
			z=x/y;
			printf("La Divicion es %f",z);
			break;
	}
	getch();
	return 0;
}
