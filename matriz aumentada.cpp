#include<stdio.h>
#include<conio.h>
main()
{
	int dim,c1,c2,divi;
	float ecuacion[100][100];
	printf("de cuanto es la matriz: ");
	scanf("%d",&dim);
	for(c1=1;c1<=dim;c1++)
	{
		for(c2=1;c2<=dim;c2++)
		{
			printf("\nValor de a\n");
			printf("a [%d][%d]: ",c1,c2);
			scanf("%f",&ecuacion[c1][c2]);
		}
		printf("\nValor de b\n");
		printf("b [%d]: ",c1);
		scanf("%f",&ecuacion[c1][dim+1]);
	}
	printf("\n\n\n");
	for(c1=1;c1<=dim;c1++)
	{
		for(c2=1;c2<=(dim+1);c2++)
		{
			printf("%7.2f",ecuacion[c1][c2]);
			if(c2==dim)
			{
				printf("  =");
			}
		}
		printf("\n");
	}
	for(c1=1;c1<=dim;c1++)
	{
		for(c2=1;c2<=(dim+1);c2++)
		{
			divi=ecuacion[1][0]/ecuacion[1][dim+1];
			divi=ecuacion[c1][divi];
				printf(" %d",ecuacion[c1][divi]);
		}
	}
}
