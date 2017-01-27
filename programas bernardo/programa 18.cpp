#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int num1,num2,resul;
	printf("Dame el primer ");
	scanf("%d",&num1);
	printf("Dame el segundo ");
	scanf("%d",&num2);
	if(num1==num2)
	{
		resul=num1*num2;
		printf("La multiplicacion de los numeros es %d",resul);		
	}else if(num1>num2)
	{
		resul=num1-num2;
		printf("La resta de los numeros es %d",resul);
	}else
	{
		resul=num1+num2;
		printf("La suma de los numeros es %d",resul);
	}
	getch();
	return 0;
}
