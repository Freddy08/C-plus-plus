#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	struct agenda
	{
		char nombre[30];
		int edad;
	}alumno,profesor;
	system("cls");
	/*inicializar*/
	alumno.nombre[0]='0';
	alumno.edad=0;
	profesor.nombre[0]='0';
	profesor.edad=0;
    /*asignacion*/
    printf("dame el nombre del alumno ");
    scanf("%s",&alumno.nombre[0]);
    printf("dime la edad ");
    scanf("%d",&alumno.edad);
    printf("dame el nombre del professor ");
    scanf("%s",&profesor.nombre[0]);
    printf("dime la edad ");
    scanf("%d",&profesor.edad);
    /*imprimir*/
    system("cls");
    printf("\nnombre\t\tedad\n");
    printf(" %s\t%d\n",alumno.nombre,alumno.edad);
    printf(" %s\t%d\n",profesor.nombre,profesor.edad);
    getch();
	return 0;
}
