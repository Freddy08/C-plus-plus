#include<stdio.h>
#include<conio.h>
main()
{
      int ciclo,b,uni1[2],uni2[2],multi;
      printf("Comienza el llenado del arreglo 1:\n");
      for(ciclo=0;ciclo<2;ciclo++)
      {
         printf("Elemento %d: ",ciclo);
         scanf("%d",&uni1[ciclo]);
      }
      printf("Comienza el llenado del arreglo 2:\n");
      for(ciclo=0;ciclo<2;ciclo++)
      {
         printf("Elemento %d : ",ciclo);
         scanf("%d",&uni2[ciclo]);
      }
      printf("Indice del arreglo1 a multiplicar: ");
      scanf("%d",&b);
      printf("\n\tResultado:\n");
      if(b==0 || b==1)
	  {
	  	for(ciclo=0;ciclo<2;ciclo++)
	  	{
	  		multi=uni2[ciclo]*uni1[b];
	  		printf("%d * %d = %d\n",uni1[b],uni2[ciclo],multi);
	  	}
	  }
}
