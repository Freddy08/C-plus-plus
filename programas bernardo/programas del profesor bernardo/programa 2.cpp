#include<stdio.h>
#include<string.h>
#include<conio.h>
struct alumno
{
	int matricula;
	char nombre[50];
	int c1;
	int c2;
	int c3;
	int c4;
};
struct promedio
{
	char nombre[50];
	float promedio;
};
void tabla_promedio(struct alumno *a,int b, struct promedio *c);
char *mejor_alumno(struct alumno *a,int b);
main()
{
	struct alumno x[10]=
	{
		99270253, "JUAN",100,100,70, 85,
		99270521,"PEDRO", 70, 90,75,100,
		98271520,"SONIA", 85,100,65,100,
		97271253,"KAREN", 50,100,31, 70,
	};
	struct alumno otros[10]=
	{
		99270002,"ALBERO",82,70,70,95,
		99270075,"RAUL",70,90,75,100,
		96271028,"KARINA",100,100,75,100,
		97270026,"LUIS",100,92,92,100,
		98270026,"SELENE",100,75,92,74,
	};
	struct promedio y[10];
	int i;
	tabla_promedio(x,4,y);
	printf("\nTabla de promedios: ");
	for(i=0;i<4;i++)
		printf("\n%15s %7.2f",y[i].nombre,y[i].promedio);
	printf("\nMejor alumno: %s",mejor_alumno(x,4));
	tabla_promedio(otros,6,y);
	printf("\n\nTabla de promedios: ");
	for(i=0;i<6;i++)
		printf("\n%15s %7.2f",y[i].nombre,y[i].promedio);
	printf("\nMejor alumno: %s",mejor_alumno(otros,6));
}
void tabla_promedio(struct alumno *a,int b, struct promedio *c)
{
	int i;
	for(i=0;i<b;i++)
	{
		strcpy(c->nombre,a->nombre);
		c->promedio=(a->c1+a->c2+a->c3+a->c4)/4.0;
		a++;
		c++;
	}
}
char *mejor_alumnos(struct alumno *a,int b)
{
	int i,posicion;
	float promedio=0.0;
	for(i=0;i<b;i++)
		if(((a+i)->c1+(a+i)->c2+(a+i)->c3+(a+i)->c4)/4.0>promedio)
		{
			promedio=((a+i)->c1+(a+i)->c2+(a+i)->c3+(a+i)->c4)/4.0;
			posicion=i;
		}
	return(a+posicion)->nombre;
}
