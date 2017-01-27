#include<stdio.h>
#include <string.h> 
#include<conio.h>
main()
{
	int ciclo1,ciclo,a,b,limite;
	float elevado[100];
	char numero[100];
	printf("Cuantas operaciones se hara: ");
	scanf("%d",&limite);
	for(ciclo=0;ciclo<limite;ciclo++)
	{
		printf("Dame el numero: ");
		scanf("%s",&numero[ciclo]);
		printf("Dame la elevacion: ");
		scanf("%f",&elevado[ciclo]);
	}
	printf("\nEsta es la funcion compreta:\n\t");
	for(ciclo=0;ciclo<limite;ciclo++)
	{
		printf("%c ",numero[ciclo]);
		printf(" ^ %.2f  ",elevado[ciclo]);
	}
	printf("\nDame el valor de a: ");
	scanf("%d",&a);
	printf("\nDame el valor de b: ");
	scanf("%d",&b);
	if(a*b>0)
	{
		printf("\nNo se puede aplicar el metodo, pues \"a\" y \"b\" tienen el mismo signo  " );
	}
	printf("\n\tN\ta\tb\tc\tf(a)\tf(b)\tf(c)\ttolerancia");	
	for(;;)
	{
		for(ciclo1=0;ciclo1<50;ciclo1++)
		{
			if(strchr(numero[ciclo],'x') != strchr(numero[ciclo],'X'))
			{
				printf(" %d ^ %.2f  ",numero[ciclo],elevado[ciclo]);
			}
		}
	}
}

