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
	if(a*b>0)
	{
		printf("\n\nEl intervalo a [%.2f] y b [%.2f] son del mismo signo, vuelva a intentar",a,b);
		getch();
		system("cls");
		goto et;
	}
	printf("\nciclos\ta\tb\tc\tf(a)\tf(b)\tf(c)\ttolerancia\n");
	for(ciclo=0;;ciclo++)
	{
		fa=pow(a,3)-2*pow(a,2)+4*(a)-8;
		fb=pow(b,3)-2*pow(b,2)+4*(b)-8;
		c=(a+b)/2;
		fc=pow(c,3)-2*pow(c,2)+4*(c)-8;
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
