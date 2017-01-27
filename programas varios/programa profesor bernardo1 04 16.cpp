/*programa 10_07 .c
asignacion de registros
ordenado empleados por antiguedad*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct nombre_completo
{
	unsigned char nombre[50];
	unsigned char paterno[50];
	unsigned char materno[50];
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
	unsigned char puesto[50];
	int sueldo;
	unsigned char area[50];
	struct fecha antiguedad;
};
void desplegar_empleado(struct empleado*a,int b);
void ordenar_anio(struct empleado *a,int b);
main()
{
	struct empleado x[10]=
	{
		"JUAN",   "LOPEZ",   "PAREZ",  "GERENTE",    9000,"GERENCIA",    5, 6,1992,
		"PEDRO",  "ABARCA",  "SANCHEZ","AUXILIAR",   2500,"FINANZAS",    8, 1,2001,
		"SONIA",  "RAMIREZ", "AGUILAR","SECRETARIA", 2000,"OPERACIONES",15,12,1998,
		"RAUL",   "SANDOVAL","VAZQUEZ","PROGRAMADOR",4000,"INFORMATICA",29,12,2001,
		"ALBERTO","LARA",    "CAMACHO","GERENTE",    9000,"OPERACIONES", 3, 6,1998,
	};
	system("cls");
	desplegar_empleado(x,5);
	ordenar_anio(x,5);
	printf("\n\nTabla ordenada: ");
	desplegar_empleado(x,5);
}
void desplegar_empleado(struct empleado *a,int b)
{
	int i;
	for(i=0;i<b;i++)
	{
		printf("\n%-9s",a[i].nombre.nombre);
		printf("%-9s",  a[i].nombre.paterno);
		printf("%-9s",  a[i].nombre.materno);
		printf("%-12s", a[i].puesto);
		printf("%6d",   a[i].sueldo);
		printf("%-12s", a[i].area);
		printf("%6d",   a[i].antiguedad.dia);
		printf("%6d",   a[i].antiguedad.mes);
		printf("%6d",   a[i].antiguedad.anio);
	}
}
void ordenar_anio(struct empleado *a,int b)
{
	struct empleado t;
	int i,j;
	for(i=0;i<b-1;i++)
		for(j=0;j<b-1-i;j++)
			if(a[j].antiguedad.anio > a[j+1].antiguedad.anio)
			{
				t     =a[j];
				a[j]  =a[j+1];
				a[j+1]=t;
			}
}
