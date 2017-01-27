#include<conio.h>
#include<stdio.h>
int main()
{
      int can,sum=0,numeros[5];
      int ciclo=0;
      
      for(;ciclo<5;ciclo++)//ciclo for
       {
            printf("cantidad %d: ",ciclo+1);
            scanf("%d", & numeros[ciclo]);//numeros deposita la cantidad de ciclo
       }
       printf("cantidad: ");
       scanf("%d", & can);
       ciclo=0;
       while (ciclo<5)
       {
             if (numeros[ciclo]>can)
                {
                    sum+=numeros[ciclo];
                }
       ciclo++ ;   
       }
printf("la suma obtenida es %d", sum);
getch();     
}
