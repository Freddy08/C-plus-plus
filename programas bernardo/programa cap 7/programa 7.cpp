#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
void leerNombre(struct t_datos *nn);
void imprimirNombre(struct t_datos *nn);
main()
{
	struct t_datos n[30];
	system("cls");
	leerNombre(&n[0]);
	getch();
}
void leerNombre(struct t_datos *nn)
{
	printf("\nnombre ");
	scanf("%s",nn->nombrec.nom);
	printf("\napell mat ");
	scanf("%s",nn->nombrec.apem);
	printf("\nape pat ");
	scanf("%s",nn->nombrec.apep);
	printf("\nedad");
	scanf("%s",nn->edad);
	getch();
}
void imprimirNombre(struct t_datos *nn)
{
	printf("nombre: %s ",nn->nombrec.nom);
	printf("ap paterno: %s ",nn->nombrec.apep);
	printf("ap materno: %s ",nn->nombrec.apem);
	printf("edad: %s ",nn->edad);
}
