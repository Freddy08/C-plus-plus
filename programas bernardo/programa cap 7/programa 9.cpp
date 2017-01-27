#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	/*declaracion de variables y apuntes a ese tipo de variable*/
	int dato1;
	int *apint;
	float dato2;
	float *apfloat;
	printf("\n Aritmetica de apuntadores 2\n");
	system("cls");
	/*Asignando la direccion a los apuntadores*/
	apint=&dato1;
	apfloat=&dato2;
	/*asignando valores a las variables y aplicando residuo y suma*/
	*apint=3;
	*apfloat=3.2;
	printf("\n\ndato1 valor inicial %d ",*apint);
	printf("\ndato2 valor inicial %.2f ",*apfloat);
	*apint=*apint%2;
	*apfloat=*apfloat+10;
	printf("\n\ndato1 residuo 2 %d ",*apint);
	printf("\ndato2 sumado 10 %.2f ",*apfloat);
	/*operador de incremento y decremento*/
	*apint=++(*apint);
	*apfloat=--(*apfloat);
	printf("\n\ndato1 residuo 2 %d ",*apint);
	printf("\ndato2 sumado 10 %.2f ",*apfloat);
    getch();
	return 0;
}
