#include<conio.h>
#include<stdio.h>
int main()
{
	int z,x,n,nnz[50];
	nnz[0]=0;//asigna el numero deseado
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
		/*switch(nnz[z])
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
				default: printf("%d",nnz[z]);
			}*/
	}	
getch(); 
}
