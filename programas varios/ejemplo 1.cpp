#include<stdio.h>
#include<string.h>
main()
{
FILE * flujo = fopen ("ejemplo.txt","w");
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
			fputs("do  ", flujo);
			fputc(' ', flujo);
		}
	fputc('\n', flujo);
	}
fflush(flujo);
fclose(flujo);
}
}
