#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
main()
{
	char cadena[100],letra;
	int c1,c2,total;
	et1:
	printf("Cadena de caracteres: ");
	gets(cadena);
	total=strlen(cadena);
	if(strlen(cadena)>=2)
	if(isalpha(c2))
	if(isalpha(c1))
	{
      	for(c1=1;c1<total;c1++)
      	{
			for(c2=0;c2<total-1;c2++)
    	  	{
    	  		if(cadena[c2]>cadena[c2+1])
    	  		{
					letra=cadena[c2]; 
					cadena[c2]=cadena[c2+1]; 
					cadena[c2+1]=letra;
				}
		 	}
	    } 
	printf("Resultado: ");
	puts(cadena);
	}else{
		printf("Vuelva a escribir la cadena\n");
		goto et1;
	}
getch();
}
