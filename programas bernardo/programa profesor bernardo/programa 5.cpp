/*Programa union1.c*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	union tipos
	{
		unsigned char uc;
		char ch;
		int in;
		float fl;
		double du;
		char cad[100];
	};
	union tipos tl[5],t2,t3,t4,t5,t6;
	tl[0].du=3.141516;
	tl[1].du=4.27;
	t3.uc='a';
	system("cls");
	printf("\n\nEspacio reservado para\"CADA variable ASOCIADA");
	printf(" a la UNION\":%d bytes.\n\n",sizeof(union tipos));
	printf("Las direcciones de memoria de los elemontos simples ");
	printf("ASOCIADOS a la UNION son:\n\n");
	printf("\n&tl[0]=%u : &tl[1]=%u : ",&tl[0],&tl[1]);
	printf("&tl[2]=%u : &tl[3]=%u : &tl[4]=%u",&tl[2],&tl[3],&tl[4]);
	printf("\n\n&t2=%u : &t3 =%u &t4=%u",&t2,&t3,&t4);
	printf("\n&t5=%u : ,&t6=%u\n\n",&t5,&t6);
	printf("tl[0] contiene: %lf\n",tl[0]);
	printf("tl[1] contiene: %lf\n\n",tl[1]);
	printf("t3 contiene: %c\n",t3);
}
