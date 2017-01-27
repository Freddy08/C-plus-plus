#include<stdio.h>
#include<conio.h>
main()
{
    int ciclo=0,cad_num1[5],cad_num2[5],repetidos=0;
    printf("cadena de dos filas para no repetir numeros");
    printf("dame la primera fila de numeros \n");
    for(;ciclo<5;ciclo++)
    {
       printf("fila 1: ", cad_num1[ciclo]);
       scanf("%d",&cad_num1[ciclo+1]);
    }
    printf("dame la otra fila de numeros\n");
    ciclo=0;
    for(;ciclo<5;ciclo++)
    {
       printf("fila 2: ",cad_num2[ciclo]);
       scanf("%d",&cad_num2[ciclo+1]);
    }
    ciclo=0;
    for(ciclo=0;ciclo<=5;ciclo++)
    {
        if (cad_num1[ciclo]==cad_num2[ciclo])
        {
              repetidos++;                              
        }
    }
    printf("numeros repetidos:%d \n",repetidos);   
getch();    
}
