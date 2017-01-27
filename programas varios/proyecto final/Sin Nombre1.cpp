#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main()
{
FILE * flujo = fopen ("alumnos.txt","w");
if(flujo==NULL)
{
	perror("El archivo de alumnos no a sido abierto adecuadamente\n");
	perror("Vuelva a intentar\n");
}else{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			fputs("l  ", flujo);
			fputc('  ', flujo);
		}
	fputc('\n', flujo);
	}
fflush(flujo);
fclose(flujo);
}
}
