#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int I,N,j,a,b,c,d,e=0;
	et1:
	printf("\nDame el valor de I= ");
	scanf("%d",&I);
	printf("\nDame el valor de N= ");
	scanf("%d",&N);
	if(I <= N)
	{		
		printf("\n\t %d",N);
		printf("\n\tsuma(3 %d^2 + 2 %d^3)",I,I);
		printf("\n\t %d",I);	
	}else
	{
		system("cls");
		printf("\t\ti no puede ser mayor de N, vuelva a intentarlo");
		goto et1;	
	}
	for(j=0;j<=N;j++)
	{
	    a=I*I;
	    c=(3*a);
	    b=I*I*I;
	    d=(2*b);
	    I++;
	    e=e+c+d;
	}
	printf("\nresultado= %d",e);
	getch();
	return 0;
}
