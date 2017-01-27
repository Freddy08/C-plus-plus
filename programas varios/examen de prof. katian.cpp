#include<stdio.h>
#include<conio.h>
main()
{
    int ciclo=0,ciclo2=0,bidi[2][2],numero=0;
    printf("ingresa los numeros a multiplicar\n");
    for(;ciclo<=2;ciclo++)
    {
       for(;ciclo2<=2;ciclo++)
       {
          printf("coordenadas %d - %d,numero: ",ciclo,ciclo2);
          scanf("%d",&bidi[ciclo][ciclo2]); 
       }
       
    }
}
