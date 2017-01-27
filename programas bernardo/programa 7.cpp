/*VENTAS DE PASTELES*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define G 150.00
#define M 100.00
#define CH 50.00
#define P 2.20
main()
{
	int g,m,ch,p;
	float tot;
	system("cls");
	printf("Introduzca el numero de pasteles GRANDES vendidor\n ");
	scanf("%i",&g);
	printf("Introduzca el numero de pasteles MEDIANOS vendidor\n ");
	scanf("%i",&m);
	printf("Introduzca el numero de pasteles CHICOS vendidor\n ");
	scanf("%i",&ch);
	printf("Introduzca el numero de PANES vendidor\n ");
	scanf("%i",&p);
	tot=(G*g)+(M*m)+(CH*ch)+(P*p);
	printf("Su venta total es de %.2f",tot);
	getch();
	return 0;
}
