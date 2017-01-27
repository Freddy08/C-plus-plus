#include<stdio.h>
#include<conio.h>
main()
{
	char dia;
	printf("Elige un dia de la semana:\n Lunes = L\n Martes = M\n Miercoles = I\n Jueves = J\n Viernes = V\n Sabado = S\n Domingo = D");
	scanf("%c",&dia);
	switch(dia)
	{
		case 'L':
			printf("#1");
			break;
		case 'M':
			printf("#2");
			break;
		case 'I':
			printf("#3");
			break;
		case 'J':
			printf("#4");
			break;
		case 'V':
			printf("#5");
			break;
		case 'S':
			printf("#6");
			break;
		case 'D':
			printf("#7");
			break;			
	}
	getch();
	return 0;
}
