/*0F -0C o 0C A 0F*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float g,con;
	int opc;
	system("cls");
	printf("Conversiones de grados de temperatura");
	printf("\n[1]0F - 0C \n[2]0C - 0F\n\n");
	printf("Selecciona una opcion:");
	scanf("%d",&opc);
	if(opc == 1)
	{
		printf("Introduce los 0F= ");
		scanf("%f",&g);
		con=(g-32)/1.8;
		printf("%f0F = %f0C",g,con);
	}else
	{
		printf("Introduce los 0C = ");
		scanf("%f",&g);
		con=g*1.8+32;
		printf("%0C = %f0F",g,con);
	}
	getch();
	return 0;
}
