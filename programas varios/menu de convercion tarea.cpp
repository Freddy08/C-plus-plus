#include<conio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	int z,x,n,nnz[50],opcion;
	et1:
	{
		system("cls");
	}
	nnz[0]=0;
	printf("bienvenido al convertidor de decimal, escoga algunas de las opciones\n");
	printf("1.- A binario\n");
	printf("2.- A octal\n");
	printf("3.- A hexadecimal\n");
	printf("4.-Salir\n");
	scanf("%d",&opcion);
    switch(opcion)
    {
    	case(1):
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
				printf("%d",nnz[z]);
			}
			getch();
			goto et1;
		break;
		case(2):
			printf("convercion de numero deciamla binario \n");
    		printf("dame el numero a convertir: ");
			scanf("%lu",&n);
			for (x=0;x<50;x++)
			{
				nnz[x]=n%8;
				n=n/8;
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
			goto et1;
		break;
		case(3):
			printf("convercion de numero deciamal binario \n");
    		printf("dame el numero a convertir: ");
			scanf("%lu",&n);
			for (x=0;x<50;x++)
			{
				nnz[x]=n%16;
				n=n/16;
				if(n==0)//comparacin
				{
					break;
				}
			}
			for(z=x;z>=0;z--)
			{
				if(nnz[z]==10)
	   		 	{
	    			printf("A");
	   			}else if(nnz[z]==11){
	    			printf("B");
	    		}else if(nnz[z]==12){
	    			printf("C");
	    		}else if(nnz[z]==13){
	    			printf("D");
	    		}else if(nnz[z]==14){
	    			printf("E");
				}else if(nnz[z]==15){
	    			printf("F");
				}else{
	    			printf("%d",nnz[z]);
				}
			}
			getch();
			goto et1;	
		break;
		default:
			{
				printf("gracias por utilizar el convertidor.");
			}
			
	}
}
