/*Programa union3.c*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	union tipos
	{
		unsigned char car[6];
		int entero;
	};
	union tipos t;
	t.entero=256;
	system("cls");
	printf("\n\nEl espacio reservado para \"CADA variable ASOCIADA");
	printf(" a la UNION\" es de %d bytes.\n\n",sizeof(union tipos));
	printf("Las direcciones de memoria de los elementos ");
	printf("INTEGRADOS en la UNION son: \n\n");
	printf("&t.ncar[0]= %u",t.car[0]);
	printf("\n&t.entero=%u\n\n",&t.entero);
	printf("El byte \"0\" de %d es %d\n",t.entero,t.car[0]);
	printf("El byte \"0\" de %d es %d\n",t.entero,t.car[1]);
}
