//FREDDY SERRANO OCHOA
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char cadena[10],par,letra,numero;
	int total,ciclo;
	et1:
	printf("Cadena de caracteres: ");
	gets(cadena);
	total=strlen(cadena);
	if (strlen(cadena)>0)
	{
		for(ciclo=0;ciclo<total;ciclo++)
		{
			if(isalpha(cadena[ciclo]));
			{
				letra+1;
			}
			if(isdigit(cadena[ciclo]));
			{		
				numero+1;
			}
		par=letra,numero;
		 ciclo+2;
 	    }
printf("resultado: \n",par);
	}else{
		printf("\tla cadena debe ser mayor a cero\n");
		goto et1;
	}
}
