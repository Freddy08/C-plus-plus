/*Salario de un trabajador*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float sn,sb,sh,d,p;
	int h;
	system("cls");
	printf("Escriba la cantidad de horas trabajadas: \n");
	scanf("%d",&h);
	printf("Escriba la paga x hora: \n");
	scanf("%f",&sh);
	sb=h*sh;
	d=sb*.12;
	p=sb*.15;
	sn=sb+p-d;
	printf("Tu sueldo bruto es %.2f,\ntus deducciones son %.2f,\ntus percepciones son %.2f\nel neto es %.2f",sb,d,p,sn);
	getch();
	return 0;
}
