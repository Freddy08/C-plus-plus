#include<stdio.h>
#include<conio.h>
main()
{
	char arrebidi[5][10],arredi[5],encuentro;
	int ciclobidi1,ciclobidi2,ciclo,A,B,C;
	printf("Ingresa el numero de elementos del primer arreglo: ");
	scanf("%d", & A);
	printf("Ingresa el numero de elementos del segundo arreglo: ");
    scanf("%d", & B);
    for(ciclobidi1=0;ciclobidi1<A;ciclobidi1++)
    {
    	for(ciclobidi2=0;ciclobidi2<B;ciclobidi2++)
    	{
            printf("[%d][%d]:%c",ciclobidi1,ciclobidi2);
            scanf("%s",&arrebidi[ciclobidi1][ciclobidi2]);
		}
	}
	printf("elementos de comparacion del arreglo: ", C);
	scanf("%d",&C);
	for(ciclo=0;ciclo<C;ciclo++)
	{
		printf("dato:%c",ciclo);
        scanf("%s",&arredi[ciclo+1]);
	}
	ciclobidi1=0;
	ciclobidi2=0;	
    for(ciclobidi1=0;ciclobidi1<A;ciclobidi1++)
    {
    	for(ciclobidi2=0;ciclobidi2<B;ciclobidi2++)
    	{
		  if(arrebidi[ciclobidi1][ciclobidi2]==arredi[ciclo])
		  {
		  	 encuentro++;
		  }
		}
		
	}
	printf("[%c] esta [%d] veces",C,encuentro);
	printf("[%c] no se localizaron");
}
