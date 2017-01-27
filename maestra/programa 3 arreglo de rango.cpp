#include<stdio.h>
#include<conio.h>
main()
{
	int arreglo[10],ciclo,rango1=0,rango2=0,rango3=0,rango4=0;
    
        	for(ciclo=0;ciclo<10;ciclo++)
       	    {
        		printf("%d: ", ciclo+1);
        		scanf("%d", & arreglo[ciclo]);
        			if(arreglo[ciclo]<=0)
       			 	{
        				ciclo++;
    			4	}
	    			if (arreglo[ciclo]>=1 && arreglo[ciclo]<=10)
	    			{
     					rango1++;
	    			}
					if (arreglo[ciclo]>=11 && arreglo[ciclo]<=20)
					{
						rango2++;
					}	
					if (arreglo[ciclo]>=21 && arreglo[ciclo]<=40)
					{
						rango3++;
					}
					if (arreglo[ciclo]>=40)
		   			{
	    				rango4++;
    				}
	         }
	     }
 		 printf("rango1: %d\n", rango1);
		 printf("rango2: %d\n", rango2);
		 printf("rango3: %d\n", rango3);
		 printf("rango4: %d\n", rango4);
getch();
}
