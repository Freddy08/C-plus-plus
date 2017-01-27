/*Elegir cual conversion realizar si de kilometros a metros o viceversa*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float z,y;
	int op;
	printf("Conversion de kms a mts o mts a km\n");
	printf("Si deseas hacer la convercion de kms a mts elige la opcion 1 y de mts a kms elige la opcion 2\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Dame los kilometros a convertir\n");
		scanf("%f",&z);
		y=z*1000;
	}else
	{
		printf("%Dame los metros a convertir\n");
		scanf("%f",&y);
		z=y/1000;
	}
	printf("La convercion a kilometros es %f\n",z);
	getch();
	return 0;
}
