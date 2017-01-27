#include<stdio.h>
#include<conio.h>
main()
{
	char arrebidi[5][10],arredi[5];
	int ciclobidi1,ciclobidi2,ciclo,A,B,C,encuentro;
	int veces[5];
	printf("Ingresa el numero de elementos del primer arreglo: ");
	scanf("%d", & A);
	printf("Ingresa el numero de elementos del segundo arreglo: ");
    scanf("%d", & B);
    for(ciclobidi1=0;ciclobidi1<A;ciclobidi1++)
    {
    	for(ciclobidi2=0;ciclobidi2<B;ciclobidi2++)
    	{
            printf("[%d][%d]:",ciclobidi1,ciclobidi2);
            scanf("%s",&arrebidi[ciclobidi1][ciclobidi2]);
		}
	}
	printf("elementos de comparacion del arreglo: ", C);
	scanf("%d",&C);
	for(ciclo=1;ciclo<=C;ciclo++)
	{
		printf("dato %d:",ciclo);
        scanf("%s",&arredi[ciclo]);
	}
	printf("resultados");
	ciclobidi1=0;
	ciclobidi2=0;
	ciclo=1;
	et1:
	veces[ciclo]=0;
    for(ciclobidi1=0;ciclobidi1<A;ciclobidi1++)
    {
    	for(ciclobidi2=0;ciclobidi2<B;ciclobidi2++)
    	{
		  if(arredi[ciclo]==arrebidi[ciclobidi1][ciclobidi2])
		  {
		  	 veces[ciclo]++;
		  }
		}
	}
	if(ciclo!=C)
	{
		ciclo++;
		goto et1;
	}
	for(ciclo=1;ciclo<=C;ciclo++)
	{
		printf("[%c] esta [%d] veces\n",arredi[ciclo],veces[ciclo]);
	}
	printf("[");
	for(ciclobidi1=0;ciclobidi1<A;ciclobidi1++)
    {
    	for(ciclobidi2=0;ciclobidi2<B;ciclobidi2++)
    	{
			if(arredi[1]!=arrebidi[ciclobidi1][ciclobidi2])
		  	{
		  		if(arredi[2]!=arrebidi[ciclobidi1][ciclobidi2])
		  		{
		  			if(arredi[3]!=arrebidi[ciclobidi1][ciclobidi2])
		  			{
		  				if(arredi[4]!=arrebidi[ciclobidi1][ciclobidi2])
		  				{
		  					if(arredi[5]!=arrebidi[ciclobidi1][ciclobidi2])
		  					{
		  						printf(" %c ",arrebidi[ciclobidi1][ciclobidi2]);
							}
						}
					}
				}
			}
		}
	}
	printf("] no se encontraron");
	getch();
}
