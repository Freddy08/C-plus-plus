/*programa aniestru.c*/
#include<stdio.h>
#include<stdlib.h>
struct autor//declara GLOBALMENTE autor
{
	char nom[25];
	char ape[35];
};
struct tema//declara GLOBALMENTE tema
{
	char modulo[4];
	char area[20];
};
/*estructura libros que anida las estructuras autor y
tema. La declaracion es tambien global.*/
struct libros
{
	char nom_lib[70];
	struct autor aut;
	struct tema tem;
};
main()
{
	struct libros li;	/*declara li del tipo libro*/
	system("cls");	/*borra pantalla*/
	printf("Titulo del libro: ");
	gets(li.nom_lib);	/*lee datos del teclado*/
	printf("Apellidos del autor: ");	/*imprime en pantalla*/
	gets(li.aut.ape);
	printf("Nombre del autor: ");
	gets(li.aut.nom);
	printf("Modulo: ");
	gets(li.tem.modulo);
	printf("Area de conocimiento: ");
	gets(li.tem.area);
}
