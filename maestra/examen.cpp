#include<conio.h>
#include<stdio.h>
int main()
{
    int arrebidi[2][2],ciclo,ciclo2,suma;
    printf("programa para multiplicar numeros\n");
    for(ciclo=0;ciclo<2;ciclo++)
    {
         for(ciclo2=0;ciclo2<2;ciclo2++)
         {
             printf("\t fila %d - %d columna, numero: ",ciclo+1,ciclo2+1);
             scanf("%d",&arrebidi[ciclo][ciclo2]);      
         }
    }
    suma=1;
    for(ciclo=0;ciclo<2;ciclo++)
    {
       for(ciclo2=0;ciclo2<2;ciclo2++)
       {
          suma=suma*arrebidi[ciclo][ciclo2];
       }
    }
printf("el resultado es: %d ",suma);
scanf("%d",suma);
}
