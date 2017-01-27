#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct libro
{
	char titulo[50];
	char autor[50];
	char area[50];
	int paginas;
	int precio;
	int existencias;
};
struct titulo
{
	char titulo[50];
};
void leer_libro(struct libro *a,int b);
void desplegar_libro(struct libro *a,int b);
void lista_titulos(struct libro *a,int b,struct titulo *c);
void titulo_mas_caro(struct libro *a,int b,char *c);
void lista_titulos_no_disponibles(struct libro *a,int b,struct titulo *c,int *d);
void titulo_autor_mas_caro_computacion(struct libro *a,int b,struct titulo *c,int *d);
main()
{
	struct libro x[10]=
	{
		"PASCAL",           "JOYANES",  "COMPUTACION",   500,350,20,
		"C",                "DEITTEL",  "COMPUTACION",   456,250, 0,
		"FINANZAS",         "JORDAN",   "ADMINISTRACION",652,380, 5,
		"COMPILADORES",     "AMO",      "COMPUTACION",   230,180, 0,
		"ESTRUCRA DE DATOS","TENENBAUM","COMPUTACION",   154,154, 6,
		"RECURSOS HUMANOS", "TIESMAN",  "ADMINISTRACION",350,210, 4,
		"BIOLOGIA",         "CARRENO",  "QUIMICA",       130,130, 4,
	};
	struct titulo y[10];
	char libro[50],autor[50];
	int c;
	int i;
	system("cls");
	desplegar_libro(x,7);
	lista_titulos(x,7,y);
	printf("\nLista de titulos:");
	for(i=0;i<7;i++)
		printf("\n%s",y[i].titulo);
	titulo_mas_caro(x,7,libro);
	printf("\n\nLibro mas caro:%s",libro);
	lista_titulos_no_disponibles(x,7,y,&c);
	printf("\n\nLibros no disponibles:");
	for(i=0;i<c;i++)
		printf("\n%s",y[i].titulo);
	titulo_autor_mas_caro_computacion(x,7,libro,autor);
	printf("\n\nLibro mas caro de computacion:%s",libro,autor);
}
void leer_libro(struct libro *a,int b)
{
	int i;
	for(i=0;i<b;i++)
	{
		printf("%-20s",a->titulo);
		printf("%-17s",a->autor);
		printf("%-17s",a->area);
		printf("%7d",a->paginas);
		printf("%7d",a->precio);
		printf("%7d\n",a->existencias);
		a++;
	}
}
void lista_tituloa(struct libro *a,int b, struct titulo *c)
{
	int i;
	for(i=0;i<b;i++)
	{
		strcpy(c->titulo,a->autor);
		a++;
		c++;
	}
}
void titulo_mas_caro(struct libro *a,int b,char *c)
{
	int i,mayor;
	mayor=a->precio;
	strcpy(c,a->titulo);
	a++;
	for(i=1;i<b;i++)
	{
		if(a->precio>mayor)
		{
			strcpy(c,a->titulo);
			mayor=a->precio;
		}
		a++;
	}
}
void lista_titulos_no_disponibles(struct libro *a,int b,struct titulo *c,int *d)
{
	int i;
	*d=0;
	for(i=0;i<b;i++)
	{
		if(a->existencias==0)
		{
			strcpy(c->titulo,a->titulo);
			(*d)++;
			c++;			
		}
		a++;
	}
}
void titulo_autor_mas_caro_computacion(struct libro *a,int b,struct titulo *c,int *d)
{
	int i,mayor,bandera=0;
	for(i=0;i<b;i++)
	{
		if(strcmp(a->area,"COMPUTACION")==0)
		{
			mayor=a->precio;
			strcpy(c,a->titulo);
			strcpy(d,a->autor);
			a++;
			bandera=1;
			break;
		}
		a++;
	}
	if(bandera==0)
	{
		strcpy(c,"NO HAY TITULOS DEL AREA DE COMPUTACION");
		strcpy(d,"NO HAY TITULOS DEL AREA DE COMPUTACION");
		return;
	}
	for(;i<b;i++)
	{
		if(strcmp(a->area,"COMPUTACION")==0)
		{
			mayor=a->precio;
			strcpy(c,a->titulo);
			strcpy(d,a->autor);
		}
		a++;
	}
}
