#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	struct Datos
	{
		char nombre[50];
		int edad;
		char genero[50];
		char estadocivil[50];
		float estatura;
		float peso;
	}persona;
	persona.nombre[0]='0';
	persona.edad=0;
	persona.genero[0]='0';
	persona.estadocivil[0]='0';
	persona.estatura=0;
	persona.peso=0;
	printf("Dame tu nombre: ");
	scanf("%s",&persona.nombre);
	printf("Dame tu edad: ");
	scanf("%d",&persona.edad);
	printf("Dame tu genero: ");
	scanf("%s",&persona.genero);
	printf("Dame tu estado civil: ");
	scanf("%s",&persona.estadocivil);
	printf("Dame tu estatura: ");
	scanf("%f",&persona.estatura);
	printf("Dame tu peso: ");
	scanf("%f",&persona.peso);
	system("cls");
	printf("Buenos dias C.%s . Usted tiene %d de edad,\n",persona.nombre,persona.edad);
	printf("es usted del genero %s, esta %s \n",persona.genero,persona.estadocivil);
	printf("su estatura es de %.2f y tiene un pesos de %.2f kg.",persona.estatura,persona.peso);
}
