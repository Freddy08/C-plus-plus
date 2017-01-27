#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	float x,y,a,b,c,d,e,f,multi1,multi2,multi3,multi4,multi5,multi6,delta,resultado1,resultado2;
	char respuesta[4];
	char falso[]="no";
	char correcto[]="si";
	et1:
	printf("x1= ");
	scanf("%f",&a);
	printf("x2= ");
	scanf("%f",&b);
	printf("c1= ");
	scanf("%f",&c);
	printf("x1= ");
	scanf("%f",&d);
	printf("x2= ");
	scanf("%f",&e);
	printf("c2= ",f);
	scanf("%f",&f);
	printf("Los datos introducidos son los correctos:\n");
	scanf("%s",&respuesta);
	if(strcmp(correcto,respuesta)==0)
	{
		multi1=a*e;
		multi2=d*b;
		delta=multi1-multi2;
		printf("delta= %f",delta);
		if(delta==0)
		{
 			printf("\nla ecuacion no tiene solucion o tiene varias soluciones");
			goto et2;
		}
		multi3=c*e;
		multi4=b*f;
		x=multi3-multi4;
		printf("\n x testada= %f",x);
		resultado1=x/delta;
		printf("\n x1= %f",resultado1);
		multi5=a*f;
		multi6=d*c;
		y=multi5-multi6;
		printf("\n y testada= %f",y);
		resultado2=y/delta;
		printf("\n x2= %f",resultado2);
		et2:
		printf("\n\nquieres volver a calcular tus datos?");
		scanf("%s",&respuesta);
		if(strcmp(correcto,respuesta)==0)
		{
			system("cls");
			goto et1;
		}else if(strcmp(falso,respuesta)==0)
		{
			system("cls");
			printf("gracias por utilizar el programa");
		}
    }else if(strcmp(falso,respuesta)==0)
    {
    	system("cls"); ;
    	printf("Vuelve a poner los valores.\n");
    	goto et1;
    }  
}
