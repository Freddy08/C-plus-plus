#include<stdio.h>
#include<time.h>
main()
{
	struct tm dia_letra;
	int anio,mes,dia;
	char *dia_semana[]=
	{
		"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Desconocido",
	};
	printf("Pulse anio,mes y dia:");
	printf("\nAnio:");
	scanf("%d",&anio);
	printf("\nMes:");
	scanf("%d",&mes);
	printf("\nDia:");
	scanf("%d",&dia);
	dia_letra.tm_year=anio-1900;
	dia_letra.tm_mon=mes-1;
	dia_letra.tm_hour=0;
	dia_letra.tm_min=0;
	dia_letra.tm_sec=1;
	dia_letra.tm_isdst=-1;
	if(mktime(&dia_letra)==-1)
	{
		dia_letra.tm_wday=7;
	}
	printf("El dia es:%s",dia_semana[dia_letra.tm_wday]);
}
