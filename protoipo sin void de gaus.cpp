#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
	int dim,a,b,res,nocero,col,ciclo1,ciclo2;
	float ecuacion[100][100],divicion,v1;
	et1:
	printf("\n\tMetodo de gaus");
	printf("\nIntroduce el numeros de incognitas (que sea menor que 5)");
	printf("\necuaciones: ");
	scanf("%d",&dim);
	if(dim<=5)
	{
		printf("\nPon los valores de A en cada ecuacion: ");
		for(a=1;a<=dim;a++)
		{
		  	printf("\necuacion numero %d\n",a);
		  	for(b=1;b<=dim;b++)
		  	{
		  		printf("\na (%d) (%d): ",a,b);
		  		scanf("%f",&ecuacion[a][b]);
		  	}
			printf("\nValores de B\n");
			printf("\nb (%d): ",a);
			scanf("%f",&ecuacion[a][dim+1]);
		}
		printf("\n\n\n");
		for(a=1;a<=dim;a++)
		{
			for(b=1;b<=(dim+1);b++)
			{
				printf("%7.2f ",ecuacion[a][b]);
				if(b==dim)
				{
					printf("  =");
				}
			}
			printf("\n");
		}
		printf("\nEsta bien tu ecuacion\n\t0=no y 1=si R= ");
		scanf("%d",&res);
		if(res==0)
		{
			et2:
			system("cls");
			printf("\nVuelve a introducir tu codigo");
			goto et1;
		}else if(res==1)
		{
			for(col=1;col<=dim;col++)
			{
				nocero=0;
				a=col;
				while(nocero==0)
				{
					if(ecuacion[a][col]!=0)
					{
						nocero=1;
					}else
					{
						a++;
					}
				}
				divicion=ecuacion[a][col];
				for(ciclo1=1;ciclo1<=(dim+1);ciclo1++)
				{
					v1=ecuacion[a][ciclo1];
					ecuacion[a][ciclo1]=ecuacion[col][ciclo1];
					ecuacion[col][ciclo1]=v1/divicion;
				}
				for(ciclo2=col+1;ciclo2<=dim;ciclo2++)
				{
					v1=ecuacion[ciclo2][col];
					for(ciclo1=col;ciclo1<=(dim+1);ciclo1++)
					{
						ecuacion[ciclo2][ciclo1]=ecuacion[ciclo2][ciclo1]-v1*ecuacion[col][ciclo1];
					}
				}
			}
			for(col=dim;col>=1;col--)
			{
				for(ciclo1=(col-1);ciclo1>=1;ciclo1--)
				{
					ecuacion[ciclo1][dim+1]=ecuacion[ciclo1][dim+1]-ecuacion[ciclo1][col]*ecuacion[col][dim+1];
					ecuacion[ciclo1][col]=0;
				}
			}	
			for(ciclo1=1;ciclo1<=dim;ciclo1++) 
  			{
				printf("\n X%d=%f\n",ciclo1,ecuacion[ciclo1][dim+1]);
			}	
			printf("\nQuiere volver a calcular otra ecuacion\n\t0=no y 1=si R= ");
			scanf("%d",&res);
			if(res==1)
			{
				goto et2;
			}else if(res==0)
			{
				printf("\n\n\n\t\tGracias por utilizar el programa !!!!!!!");
			}	
		}
	}else{
		system("cls");
		printf("Las incognitas no deben rebasar de 5!!!!!\nvuelva a intentar");
		goto et1;
	}
}
