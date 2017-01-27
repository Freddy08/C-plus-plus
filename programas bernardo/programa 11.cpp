/*Par o impar*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int n;
	system("cls");
	printf("Par o impar.\n\n");
	printf("Escribe el numero: ");
	scanf("%d",&n);
	if(n %2 == 0)
	{
		printf("El numero %d es par.",n);
	}
	if(n %2 != 0)
	{
		printf("El numero %d es impar.",n);
	}
	getch();
	return 0;
}
