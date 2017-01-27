#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	float var1,var2,var3,var4,var5,var6,var7,var8,var9,var10,var11,var12;
	float delta,x1,x2,x3,a,b,c;
	float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	float multi,multi1,multi2,multi3,multi4,multi5,multi6,multi7,multi8,multi9,multi10,multi11;
	char respuesta[3];
	char falso[]="no";
	char correcto[]="si";
	printf("\tSistema de 3 incognitas con el metodo de camer\n");
	printf("\tEl programa solo acepta numeros decimales o/y reales\n\tcualquier fraccion se tendra que poner en real");
	et1:
	printf("\nx1= ");
	scanf("%f",&var1);
	printf("x2= ");
	scanf("%f",&var2);
	printf("x3= ");
	scanf("%f",&var3);
	printf("d1= ");
	scanf("%f",&var4);
	printf("x1= ");
	scanf("%f",&var5);
	printf("x2= ");
	scanf("%f",&var6);
	printf("x3= ");
	scanf("%f",&var7);
	printf("d2= ");
	scanf("%f",&var8);
	printf("x1= ");
	scanf("%f",&var9);
	printf("x2= ");
	scanf("%f",&var10);
	printf("x3= ");
	scanf("%f",&var11);
	printf("d3= ");
	scanf("%f",&var12);
	system("cls"); 
	printf("\n %f x1 + %f x2 + %f x3 = %f d1",var1,var2,var3,var4);
	printf("\n %f x1 + %f x2 + %f x3 = %f d1",var5,var6,var7,var8);
	printf("\n %f x1 + %f x2 + %f x3 = %f d1",var9,var10,var11,var12);
	printf("\n\aEstan bien sus datos? conteste con un si o un no minuscula R= ");
    scanf("%s",&respuesta);
    if(strcmp(respuesta,correcto)==0)
    {
			a1=(var6*var11)-(var10*var7);
    		multi=var1*a1;
    		if(var2 > 0)
    		{
    			a2=(var5*var11)-(var9*var7);
    			multi1=var2*a2;
    		}else if(var2 <0)
    		{
    			a2=(var5*var11)-(var9*var7);
    			multi1=-1*var2*a2;
    		}
    		a3=(var5*var10)-(var9*var6);
    		multi2=var3*a3;
    		delta=multi+multi1+multi2;
			printf("\ndelta: %f",delta);
			if(delta==0)
			{
				printf("\n\aNo tiene solucion o multiples soluciones");
				et4:
				printf("\nQuieres volver a introducir nuevos datos? conteste con un si o un no R=");
			 	scanf("%s",&respuesta);
				if(strcmp(correcto,respuesta)==0)
				{
					system("cls");
					goto et2;
				}else if(strcmp(falso,respuesta)==0)
				{
					goto et3;					
				}
			}
			a4=(var6*var11)-(var10*var7);
			multi3=var4*a4;
			if(var2>0)
    		{
    			a5=(var8*var11)-(var12*var7);
    			multi4=var2*a5;
    		}else if(var2<0)
    		{
    			a5=(var8*var11)-(var12*var7);
    			multi4=-1*var2*a5;
    		}
    		a6=(var8*var10)-(var12*var6);
    		multi5=a6*var3;
    		x1=multi3+multi4+multi5;
    		printf("\nX testada #1= %f",x1);
			a7=(var8*var11)-(var12*var7);
			multi6=var1*a7;
			if(var4<0)
    		{
    			a8=(var5*var11)-(var9*var7);
    			multi7=-1*var4*a8;
    		}else if(var4>0)
    		{
    			a8=(var5*var11)-(var9*var7);
    			multi7=var4*a8;
    		}
    		a9=(var5*var12)-(var9*var8);
    		multi8=a9*var3;
    		x2=multi6+multi7+multi8;
    		printf("\nX testada #2= %f",x2);
    		a10=(var6*var12)-(var10*var8);
			multi9=var1*a10;
			if(var2>0)
    		{
    			a11=(var5*var12)-(var9*var8);
    			multi10=var2*a11;
    		}else if(var2<0)
    		{
    			a11=(var5*var12)-(var9*var8);
    			multi10=-1*var2*a11;
    		}
    		a12=(var5*var10)-(var9*var6);
    		multi11=a12*var4;
    		x3=multi9+multi10+multi11;
    		printf("\nX testada #3= %f",x3);
			a=x1/delta;
			b=x2/delta;
			c=x3/delta;
			printf("\nX1 = %f",a);
			printf("\nX2 = %f",b);
			printf("\nX3 = %f",c);
			getch();
			goto et4;			
    }
	if(strcmp(respuesta,falso)==0)
    {
    	et2:
    	system("cls"); 
    	printf("\aVuelve a poner los valores.\n");
    	goto et1;
    }
et3:
system("cls");
printf("\agracias por utilizar el programa");
printf("\n\n\tPrograma hecho por el alumno: Freddy Serrano Ochoa 3ter. C ");
getch();
}

