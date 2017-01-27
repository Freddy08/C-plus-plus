#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
	char cadena[100],letra;
	int c,total;
	et1:
	printf("Cadena de caracteres: ");
	gets(cadena);
	printf("Resultado: ");
	total=strlen(cadena);
	if(strlen(cadena)>=2)
	{
      	for(c=0;c<total-1;c++)
      	{
			if(strchr(cadena,'a'))
      		{	
      			printf("a");
      			c++;
			}else if(strchr(cadena,'A'))
      		{	
      			printf("A");
      			c++;
			}if(strchr(cadena,'b'))
      		{
      			printf("b");
      			c++;
			}else if(strchr(cadena,'B'))
      		{	
      			printf("B");
      			c++;
			}if(strchr(cadena,'c'))
      		{
      			printf("c");
      			c++;
			}else if(strchr(cadena,'C'))
      		{	
      			printf("C");
      			c++;
			}if(strchr(cadena,'d'))
      		{
      			printf("d");
      			c++;
			}else if(strchr(cadena,'D'))
      		{	
      			printf("D");
      			c++;
			}if(strchr(cadena,'e'))
      		{
      			printf("e");
      			c++;
			}else if(strchr(cadena,'E'))
      		{	
      			printf("E");
      			c++;
			}if(strchr(cadena,'f'))
      		{
      			printf("f");
      			c++;
			}else if(strchr(cadena,'F'))
      		{	
      			printf("F");
      			c++;
			}if(strchr(cadena,'g'))
      		{
      			printf("g");
      			c++;
			}else if(strchr(cadena,'G'))
      		{	
      			printf("G");
      			c++;
			}if(strchr(cadena,'h'))
      		{
      			printf("h");
      			c++;
			}else if(strchr(cadena,'H'))
      		{	
      			printf("H");
      			c++;
			}if(strchr(cadena,'i'))
      		{
      			printf("i");
      			c++;
			}else if(strchr(cadena,'I'))
      		{	
      			printf("I");
      			c++;
			}if(strchr(cadena,'j'))
      		{
      			printf("j");
      			c++;
			}else if(strchr(cadena,'J'))
      		{	
      			printf("J");
      			c++;
			}if(strchr(cadena,'k'))
      		{
      			printf("k");
      			c++;
			}else if(strchr(cadena,'K'))
      		{	
      			printf("K");
      			c++;
			}if(strchr(cadena,'l'))
      		{
      			printf("l");
      			c++;
			}else if(strchr(cadena,'L'))
      		{	
      			printf("L");
      			c++;
			}if(strchr(cadena,'m'))
      		{
      			printf("m");
      			c++;
			}else if(strchr(cadena,'M'))
      		{	
      			printf("M");
      			c++;
			}if(strchr(cadena,'n'))
      		{
      			printf("n");
      			c++;
			}else if(strchr(cadena,'N'))
      		{	
      			printf("N");
      			c++;
			}if(strchr(cadena,'ñ'))
      		{
      			printf("ñ");
      			c++;
			}else if(strchr(cadena,'Ñ'))
      		{	
      			printf("Ñ");
      			c++;
			}if(strchr(cadena,'o'))
      		{
      			printf("o");
      			c++;
			}else if(strchr(cadena,'O'))
      		{	
      			printf("O");
      			c++;
			}if(strchr(cadena,'p'))
      		{
      			printf("p");
      			c++;
			}else if(strchr(cadena,'P'))
      		{	
      			printf("P");
      			c++;
			}if(strchr(cadena,'q'))
      		{
      			printf("q");
      			c++;
			}else if(strchr(cadena,'Q'))
      		{	
      			printf("Q");
      			c++;
			}if(strchr(cadena,'r'))
      		{
      			printf("r");
      			c++;
			}else if(strchr(cadena,'R'))
      		{	
      			printf("R");
      			c++;
			}if(strchr(cadena,'s'))
      		{
      			printf("s");
      			c++;
			}else if(strchr(cadena,'S'))
      		{	
      			printf("S");
      			c++;
			}if(strchr(cadena,'t'))
      		{
      			printf("t");
      			c++;
			}else if(strchr(cadena,'T'))
      		{	
      			printf("T");
      			c++;
			}if(strchr(cadena,'u'))
      		{
      			printf("u");
      			c++;
			}else if(strchr(cadena,'U'))
      		{	
      			printf("U");
      			c++;
			}if(strchr(cadena,'v'))
      		{
      			printf("v");
      			c++;
			}else if(strchr(cadena,'V'))
      		{	
      			printf("V");
      			c++;
			}if(strchr(cadena,'w'))
      		{
      			printf("w");
      			c++;
			}else if(strchr(cadena,'W'))
      		{	
      			printf("W");
      			c++;
			}if(strchr(cadena,'x'))
      		{
      			printf("x");
      			c++;
			}else if(strchr(cadena,'X'))
      		{	
      			printf("X");
      			c++;
			}if(strchr(cadena,'y'))
      		{
      			printf("y");
      			c++;
			}else if(strchr(cadena,'Y'))
      		{	
      			printf("Y");
      			c++;
			}if(strchr(cadena,'z'))
      		{
      			printf("z");
      			c++;
			}else if(strchr(cadena,'Z'))
      		{	
      			printf("Z");
      			c++;
			}
		   break;
         }
	}else{
		printf("Vuelva a escribir la cadena\n");
		goto et1;
	}
getch();
}
