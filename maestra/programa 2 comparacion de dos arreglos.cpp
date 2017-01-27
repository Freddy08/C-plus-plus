#include<stdio.h>
#include<conio.h>
main()
{
	int con1[5],con2[5],ciclo,may_con1=0,may_con2=0;
	printf("ELEMENTOS DEL PRIMER ARREGLO \n");
	for(ciclo=0;ciclo<5;ciclo++)
	{
		printf("%d: ", ciclo+1);
		scanf("%d", & con1[ciclo]);
	}
	printf("ELEMENTOS DEL SEGUNDO ARREGLO \n");
	for(ciclo=0;ciclo<5;ciclo++)
	{
		printf("%d: ", ciclo+1);
		scanf("%d", & con2[ciclo]);
	}
	ciclo=0;
	while(ciclo<5)
	{
		if (con1[ciclo]>con2[ciclo])
		{
			printf ("ELEMENTO MAYOR, ARREGLO1\n");
			may_con1++;
		}else if (con1[ciclo]<con2[ciclo])
		{
			printf ("ELEMTO MAYOR, ARREGLO2\n");
			may_con2++;
		}else
		{
			printf ("EMPATE\n");
		}
		ciclo++;
	}
	if (may_con1>may_con2)
	{
		printf ("GANADOR: 1");
	}else if (may_con1<may_con2)
	{
		printf ("GANADOR: 2");
	}else
	{
		printf ("EMPATE");
	}
	getch();	
}
