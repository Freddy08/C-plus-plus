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
    printf("\n\nla ecuacion es: \n");    	
  	printf("\nLa solucion es:\n");
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
		printf("\n\n B(%d): ",A);
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
    int k,ciclo,ciclo1,ciclo2,a;
    float divicion,V1;    
    for(ciclo=1;ciclo<=Dim;ciclo++)
    {
        k=0;a=ciclo;
        while(k==0)
		{
            if(ecuacion[a][ciclo]!=0)
			{
                k=1;
			}
            else
			{
			 a++;
		    }
		}
        divicion=ecuacion[a][ciclo];
        for(ciclo1=1;ciclo1<=(Dim+1);ciclo1++)
		{
            V1=ecuacion[a][ciclo1];
            ecuacion[a][ciclo1]=ecuacion[ciclo][ciclo1];
            ecuacion[ciclo][ciclo1]=V1/divicion;
		}
        for(ciclo2=ciclo+1;ciclo2<=Dim;ciclo2++)
		{
            V1=ecuacion[ciclo2][ciclo];
            for(ciclo1=ciclo;ciclo1<=(Dim+1);ciclo1++)
			{
                ecuacion[ciclo2][ciclo1]=ecuacion[ciclo2][ciclo1]-V1*ecuacion[ciclo][ciclo1];
			}
   		}
	}
    for(ciclo=Dim;ciclo>=1;ciclo--) 
	{	
		for(ciclo1=(ciclo-1);ciclo1>=1;ciclo1--)
		{
    	    ecuacion[ciclo1][Dim+1]=ecuacion[ciclo1][Dim+1]-ecuacion[ciclo1][ciclo]*ecuacion[ciclo][Dim+1];
    	    ecuacion[ciclo1][ciclo]=0;
   		}
	}
}
