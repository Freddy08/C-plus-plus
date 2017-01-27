#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	struct agenda
	{
		char nombre[30];
		float estatura;
	};
	struct agenda alumno;
	system("cls");
	/*inicializar*/
	alumno.nombre[0]='0';
	alumno.estatura=0;
	/*asignacion*/
	printf("dame el nombre del alumno ");
	scanf("%s",&alumno.nombre[0]);
	printf("dime la estatura ");
	scanf("%f",&alumno.estatura);
	/*imprimir*/
	system("cls");
	printf("\nnombre\t\t\n");
	printf("%s\t%.2f\n",alumno.nombre,alumno.estatura);
	getch();
	return 0;
}
