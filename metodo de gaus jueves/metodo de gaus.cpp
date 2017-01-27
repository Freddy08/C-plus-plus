#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void recibedatos(int *Dim, float ecuacion[][102]);
void EscribeDatos(int Dim, float ecuacion[][102]);
void solucion(int Dim, float ecuacion[][102]);
int main(void)
{
    int C,Dimension;
    float Sistema[101][102];
    recibedatos(&Dimension,Sistema);
    EscribeDatos(Dimension,Sistema);
    solucion(Dimension,Sistema);
    printf("\n\nla ecuacion es la siguiente: \n");    	
  	printf("\nLas soluciones son:\n");
  	for(C=1;C<=Dimension;C++) 
  	{
		printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
	}	 
return(0);
}
void recibedatos(int *Dim,float ecuacion[][102])
{
    int A,B;
    et1:
    printf("\nMETODO DE GAUS");
    printf("\nIntroduce el numero de incognitas(menor que 5): ");
    scanf("%d",&*Dim);
    if(*Dim<=5)
    {
   	 	printf("\nPon los valores de A en cada ecuacion:");
    	for(A=1;A<=*Dim;A++) 
		{
		printf("\nEcuacion numero %d",A);	
			for(B=1;B<=*Dim;B++)
			{
        		printf("\n A(%d,%d):",A,B);
				scanf("%f",&ecuacion[A][B]);
			}
		printf("\nValores de B:");
		printf("\n B(%d): ",A);
		scanf("%f",&ecuacion[A][*Dim+1]);
		}
    }else{
    	system("cls");
    	printf("Las incognitas no deben rebasar de 5");
    	goto et1;
    }
}
void EscribeDatos(int Dim, float ecuacion[][102])
{
    int A,B;
    for(A=1;A<=Dim;A++)
	{
        for(B=1;B<=(Dim+1);B++)
		{
            printf("%7.2f",ecuacion[A][B]);
            if(B==Dim) 
            {
				printf("   =");
			}
    	}
	printf("\n");
 	}
}
void solucion(int Dim, float ecuacion[][102])
{
    int NoCero,Col,C1,C2,A;
    float divicion,V1;
    for(Col=1;Col<=Dim;Col++)
	{
        NoCero=0;A=Col;
        while(NoCero==0)
		{
            if(ecuacion[A][Col]!=0)
			{
                NoCero=1;
			}
            else
			{
			 A++;
		    }
		}
        divicion=ecuacion[A][Col];
        for(C1=1;C1<=(Dim+1);C1++)
		{
            V1=ecuacion[A][C1];
            ecuacion[A][C1]=ecuacion[Col][C1];
            ecuacion[Col][C1]=V1/divicion;
		}
        for(C2=Col+1;C2<=Dim;C2++)
		{
            V1=ecuacion[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++)
			{
                ecuacion[C2][C1]=ecuacion[C2][C1]-V1*ecuacion[Col][C1];
			}
   		}
	}
    for(Col=Dim;Col>=1;Col--) 
	{	
		for(C1=(Col-1);C1>=1;C1--)
		{
    	    ecuacion[C1][Dim+1]=ecuacion[C1][Dim+1]-ecuacion[C1][Col]*ecuacion[Col][Dim+1];
    	    ecuacion[C1][Col]=0;
   		}
	}
}
