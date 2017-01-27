#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int m,ciclo,ciclo1;
	float n=0,suma,dimencion1,dimencion2,multi1,multi2,multi3,res1=0,res2=0,res3=0,c;
	printf("\" Recuerda que este es la funcion X^3-2(X)^2+4(X)-8 \"");
	printf("\nDame la primera dimencion: ");
	scanf("%f",&dimencion1);
	printf("\nDame el segundo dimencion: ");
	scanf("%f",&dimencion2);
	printf("\n n\ta\tb\tc\tf(a)\tf(b)\tf(c)\tsuma\n");
	for(ciclo=0;ciclo<10;ciclo++)
	{
		res1=dimencion1*dimencion1*dimencion1-2*(dimencion1*dimencion1)+4*dimencion1-8;
		res2=dimencion2*dimencion2*dimencion2-2*(dimencion2*dimencion2)+4*dimencion2-8;
		c=(dimencion1+dimencion2)/(2);
		res3=c*c*c-2*(c*c)+4*(c)-8;
		if(ciclo==0) 
		{
			printf("\n %d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%f\t\n",ciclo,dimencion1,dimencion2,c,res1,res2,res3,suma);
			n++;
		}else
		{
			n++;
			m=pow(2,n); 
			suma=(dimencion2-dimencion1)/(m);
			printf("\n %d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%f\t\n",ciclo,dimencion1,dimencion2,c,res1,res2,res3,suma);
			if(suma<=0.05)
			{
				break;
			}
		}
		
	}
getch();
}
