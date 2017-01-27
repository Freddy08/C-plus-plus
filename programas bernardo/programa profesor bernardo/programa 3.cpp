#include<stdio.h>
#include<stdlib.h>
main()
{
	struct
	{
		unsigned bit0:1;
		unsigned bit1:1;
		unsigned bit2:1;
		unsigned bit3:1;
		unsigned bit4:1;
		unsigned bit5:1;
		unsigned bit6:1;
		unsigned bit7:1;
	}byte;
	system("cls");	/*borra pantalla*/
	printf("Introduzca un numero positivo comprendido entre 0");
	printf(" y 255  ");
	scanf("%d",&byte);	/*Almacena el numero en byte*/
	printf("El numero %d decimal \n",byte);
	/*Imprime de izquierda a derecha los bits del byte*/
	printf("Vale en binario: ");
	printf("%d",byte.bit7);
	printf("%d",byte.bit6);
	printf("%d",byte.bit5);
	printf("%d",byte.bit4);
	printf("%d",byte.bit3);
	printf("%d",byte.bit2);
	printf("%d",byte.bit1);
	printf("%d\n",byte.bit0);
}
