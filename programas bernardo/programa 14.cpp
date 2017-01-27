/* AÑO BISIESTO*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int anio;
	system("cls");
	printf("Indica si el anio en que nacistes fue bisiesto\n\n");
	printf("En que anio nacistes ");
	scanf("%d",&anio);
	if(anio %4 == 0)
	{
		printf("El anio en que nacistes es bisiesto\n\n");
	}else
	{
		printf("El anio qn que nacistes NO es biciesto\n\n");
		
	}
	getch();
	return 0;
}
