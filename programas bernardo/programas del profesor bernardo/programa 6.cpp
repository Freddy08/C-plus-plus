#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct nombre_completo
{
	char nombre[50];
	char paterno[50];
	char materno[50];
};
struct fecha
{
	int dia;
	int mes;
	int anio;
};
struct empleado
{
	struct nombre_completo nombre;
	char puesto[50];
	int sueldo;
	char area[50];
	struct fecha antiguedad;
};
void desplegar_empleado(struct empleado *a,int b);
void aumento(struct empleado *a,int b,int c);
main()
{
	struct empleado x[10]=
	{
		"JUAN"   ,"LOPEZ"   ,"PEREZ"  ,"GERENTE"     ,9000,"GERENCIA"   , 5, 6,1992,
		"PEDRO"  ,"ABARCA"  ,"SANCHEZ","AUXILIAR"    ,2500,"FINANZAS"   , 8, 1,2001,
		"SONIA"  ,"RAMIREZ" ,"AGUILAR","SECRETARIA"  ,2000,"OPERACIONES",15,12,1998,
		"RAUL"   ,"SANDOVAL","VAZQUEZ","PROGRAMACION",4000,"INFORMATICA",29,12,2001,
		"ALBERTO","LARA"    ,"CAMACHO","GERENTE"     ,9000,"OPERACIONES", 3, 6,1998,
	};
	system("cls");
	desplegar_empleado(x,5);
	aumento(x,5,10);
	printf("\n\nAmento 10%: ");
	desplegar_empleado(x,5);
}
void desplegar_empleado(struct empleado *a,int b)
{
	int i;
	for(i=0;i<b;i++)
	{
		printf("\n%-9s",a->nombre);
		printf("%-9s",a->nombre.paterno);
		printf("%-9s",a->nombre.materno);
		printf("%-12s",a->puesto);
		printf("%6d",a->sueldo);
		printf("%-12s",a->area);
		printf("%6d",a->antiguedad.anio);
		printf("%6d",a->antiguedad.mes);
		printf("%6d",a->antiguedad.dia);
		a++;
	}
}
void aumento(struct empleado *a,int b,int c)
{
	int i;
	for(i=0;i<b;i++)
	{
		a->sueldo=a->sueldo*(1+c/100.0);
		a++;
	}
}
