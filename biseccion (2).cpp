#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int ciclo;
	float fa,fb,fc,a,b,c, ancho;
	double suma;
	et:
	printf("\nMetodo de Biseccion");
	printf("\nIngresa el valor de a: ");
	scanf("%f",&a);
	printf("\nIngresa el valor de b: ");
	scanf("%f",&b);
	/*if(a*b>0)
	{
		printf("\n\nEl intervalo a [%.2f] y b [%.2f] son del mismo signo, vuelva a intentar",a,b);
		getch();
		system("cls");
		goto et;
	}*/
	printf("\nciclos\ta\tb\tc\tf(a)\tf(b)\tf(c)\ttolerancia\n");
	for(ciclo=0;;ciclo++)
	{
		fa=3*pow(a,4)-7*pow(a,3)+2*(a)+12;
		fb=3*pow(b,4)-7*pow(b,3)+2*(b)+12;
		c=(a+b)/2;
		fc=3*pow(c,4)-7*pow(c,3)+2*(c)+12;
		if(ciclo == 0)
		{
			printf("\n%d\t%.2f\t%.2f\t%.2f\t%.4f %.4f %.4f %f",ciclo,a,b,c,fa,fb,fc,suma);
			suma=(b-a)/2;
		}else
		{
			suma=suma/2;
			printf("\n%d\t%.2f\t%.2f\t%.2f\t%.4f\t%.4f\t%.4f\t%f",ciclo,a,b,c,fa,fb,fc,suma);
		}
		if(suma<=0.05)
		{
			break;
		}else
		{
			if(fa>fb)
			{
				a=b;
			}else if(fa<fc)
			{
				a=c;
			}
		}
	}
	printf("\nEl valor de c es: %f",c);
}
