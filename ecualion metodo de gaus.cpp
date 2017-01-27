#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	 float Pivote,V1,c;
     int ciclo,a,NoCero,ciclo1,ciclo2,num,num2,ecuacion[5][5],b[5];
     printf("Sistema de incognitas con el metodo de gaus\n");
     et1:
     printf("Del 1 al 5 cuantas ecuacines quiere hacer? R= ");
     scanf("%d",&num);
     if(num<=5)
     {
     	for(ciclo1=0;ciclo1<num;ciclo1++)
	 	{
	 		for(ciclo2=0;ciclo2<num;ciclo2++)
	 		{
	 			printf("a%d= ",ciclo2+1);
	 			scanf("%d",&ecuacion[ciclo1][ciclo2]);
	 		}
		printf("b%d= ",ciclo1+1);
	 	scanf("%d",&b[ciclo1]);
	 	}
		system("cls");
		printf("\n");
    	for(ciclo1=0;ciclo1<num;ciclo1++)
    	{
    	    for(ciclo2=0;ciclo2<num;ciclo2++)
    	    {
    	        printf("%d\t",ecuacion[ciclo1][ciclo2]);
    	    }
    	printf("= %d\t",b[ciclo1]);
   		printf("\n");
   		}
   		getch();
   		for(ciclo1=0;ciclo1<=num;ciclo1++)
   		{
   			  for(ciclo2=0;ciclo2<num;ciclo2++)
			  {
			       suma=ecuacion[ciclo1][ciclo2]*ecuacion[ciclo1][ciclo2];	 	
			  } 
		x=ecuacion[0][0]/suma;
   		}
   		for(ciclo1)
   		
   		
   		
   		
   	 }else{
   	 	system("cls");
   	 	printf("No debe rebasar el limite de 5,\nvuenve a intentar\n");
   	 	goto et1;
   	 }
}
