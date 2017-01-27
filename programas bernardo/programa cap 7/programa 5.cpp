#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef int Entero;
typedef struct
{
	float numReal;
	Entero n;
}Tipo;
main()
{
   Entero a;
   Tipo b;
   system("cls");
   a=10;
   b.n=1;
   b.numReal=1.10;
   printf(" %d %d %f",a,b.n,b.numReal);
   getch();
   return 0;
}
