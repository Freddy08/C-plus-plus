#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	struct t_nombre
	{
		char nom[10];
		char apem[10];
		char apep[10];
	};
	struct t_datos
	{
		struct t_nombre nombrec;
		int edad;
	};
	struct t_datos *nn;
	struct t_datos n;
	system("cls");
	nn=&n;
	printf("\n\n Leer datos \n");
	printf("\n nombre");
	scanf("%s",nn->nombrec.nom);
	printf("\n apell mat");
	scanf("%s",nn->nombrec.apem);
	printf("\n apell pat");
	scanf("%s",nn->nombrec.apep);
	printf("\n edad");
	scanf("%s",nn->edad);
	printf("\n\n mostrar datos\n");
	printf("nombre: %s",nn->nombrec.nom);
	printf("ap paterno: %s",nn->nombrec.apep);
	printf("ap materno: %s",nn->nombrec.apem);
	printf("edad: %s",nn->edad);
	getch();
	return 0;
}
