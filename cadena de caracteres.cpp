#include<stdio.h>
#include<string.h>
main()
{
	char dic[15]={'0','1','2','3','4','5','6','7','8','9','+','*','/','(',')'};
	char cadena[20];
	int num,longi;
	printf("El diccionario es 0,1,2,3,4,5,6,7,8,9,+,*,/,(,)");
	printf("\n\nCuantos caracteres ingresaras?: ");
	scanf("%d",&num);
	for(int ciclo=0;ciclo<num;ciclo++)
	{
		printf("Caracter numero %d: ",ciclo+1);
		scanf("%s",&cadena[ciclo]);
	}
	for(int ciclo=0;ciclo<num;ciclo++)
	{
		for(int ciclo2=0;ciclo2<15;ciclo2++)
		{
			if(cadena[ciclo]!=dic[ciclo2])
			{
				printf("error");
				break;
			}			
		}		
	}    
}
