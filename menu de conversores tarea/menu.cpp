#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void binario(int decimal);
void octal(int decimal);
void hexadecimal(int decimal);

int main()
{
	int op,bandera=0,decimal;
	printf("\n dame el numero decimal: ");
	scanf("%lu",&decimal);
	while(bandera==0)
	{
		system("cls");
		printf("\t menu de converciones");
		printf("\n 1.-decimal-binario");
		printf("\n 2.-decimal-octal");
		printf("\n 3.-decimal-hexadecimal");
		printf("\n 4.-salir");
		printf("\n dame la opcion deceada: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("la convercion binario es: ");
				binario(decimal);
				system("pause");
				break;
			case 2:
				printf("la convercion octal es: ");
				octal(decimal);
				system("pause");
				break;
			case 3:
				printf("la convercion hexadecimal es: ");
				hexadecimal(decimal);
				system("pause");
				break;
			default: printf("Gracias por utilizar el conversor"),bandera=1;								
		}
	}
}

void binario(int decimal)
{
  int z,x,nnz[50];
  for (x=0;x<50;x++)
  {
 	   nnz[x]=decimal%2;
	   decimal=decimal/2;
	   if(decimal==0) //comparacin
	   {
	    	break;
       }
  }
  for(z=x;z>=0;z--)
  {
     	printf("%d",nnz[z]);
  }
}

void octal(int decimal)
{
  int z,x,nnz[50];
  for (x=0;x<50;x++)
  {
 	   nnz[x]=decimal%8;
	   decimal=decimal/8;
	   if(decimal==0)//comparacin
	   {
	    	break;
       }
  }
  for(z=x;z>=0;z--)
  {
     	printf("%d ",nnz[z]);
  }
}

void hexadecimal(int decimal)
{
  int z,x,nnz[50];
  for (x=0;x<50;x++)
  {
 	   nnz[x]=decimal%16;
	   decimal=decimal/16;
	   if(decimal==0)//comparacin
	   {
	    	break;
       }
  }
  for(z=x;z>=0;z--)
  {
    switch(nnz[z])
    {
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
				default: printf("\n%d",nnz[z]);               
    }
  }
}
