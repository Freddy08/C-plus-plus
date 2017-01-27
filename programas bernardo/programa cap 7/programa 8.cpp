/*1. manejo de apuntadores septiembre 2010*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	/*declaracion de variables y apuntador a ese tipo de variable*/
	int dato1;
	int *apint;
	float dato2;
	float *apfloat;
	printf("\nManejo de apuntadores 1\n");
	system("cls");
	/*Asignando la direccion a los apuntadores*/
	apint=&dato1;
	apfloat=&dato2;
	/*asignando la direccion a los apuntadores*/
	*apint=3;
	*apfloat=3.2;
	printf("\ndato1 %d direccion dato 1 %d contenido apuntador %d",dato1,&dato1,apint);
    printf("\ndato1 %.2f direccion dato 2 %d contenido apuntador %d",dato2,&dato2,apfloat);
	/*modificando las variables*/
	*apint=45;
	*apfloat=51.3;
	printf("\ndato1 %d direccion dato 1 %d contenido apuntador %d",dato1,&dato1,apint);
    printf("\ndato1 %.2f direccion dato 2 %d contenido apuntador %d",dato2,&dato2,apfloat);
    getch();
	return 0;
}
