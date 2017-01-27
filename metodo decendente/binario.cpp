#include<conio.h>
#include<stdio.h>
main()
{
	int z,decimal,binario[50],ciclo;
	printf("Dame el numero binario a convertir: ");
	scanf("%lu",&binario);
	for(ciclo=0;ciclo<50;ciclo++)
	{
		binario[ciclo]=decimal;
		decimal=decimal*8;
	}
		printf("%d",binario[ciclo]);
}
