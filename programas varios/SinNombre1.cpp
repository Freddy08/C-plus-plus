#include<stdio.h>
#include<conio.h>
main()
{
	int divicion,ciclo=0,un[10];
	int *resultado=0;
	printf("introdusca los 10 numeros de las materias\n");
	for(ciclo=0;ciclo<10;ciclo++)
	{
		printf("dato %d: ", ciclo+1);
		scanf("%d",&un[ciclo]);
	}
	for(ciclo=0;ciclo<10;ciclo++)
	{
	   *resultado=*resultado+un[ciclo];	
	}
	divicion=*resultado/10;
	printf("el resultado es:%d ",divicion);
	scanf("%d",divicion);
getch();
}
