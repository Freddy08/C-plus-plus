#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int z,x,n,nnz[50];
	nnz[0]=0;//asigna el numero deseado
    {
    	system("cls");
	}
	printf("convercion de numero deciamla binario \n");
    printf("dame el numero a convertir: ");
	scanf("%lu",&n);
	for (x=0;x<50;x++)
	{
		nnz[x]=n%2;
		n=n/2;
		if(n==0)//comparacin
		{
			break;
		}
	}
	for(z=x;z>=0;z--)
	{
		printf("%d",nnz[z]);//tarea de decimal a octal
	}
getch(); 
}
