#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	char pregunta;
	int cantidad, po1=1, po2=1, po3=1, po4=1, po5=1, N, opc, D, aux=0;
	int i=0, fin=0;
	float xxxxx=0, xxxx=0, xxx=0, xx=0, ind=0, a_a[100], b_b[100], c_c[100], fa[100], fb[100], fc[100];
	float x=0, error;
	do{
	system("cls");
	inicio2:
	printf("\tMETODO DE LA POSICION FALSA\n");
	printf("Cantidad De Datos Debe Ser Entre 1 y 6\nEl Ultimo Es El Numero Independiente\n");
	printf("\n\nIntrodusca La Cantidad De Datos: ");
	scanf("%d",&cantidad);
	system("cls");
	printf("Dame La Formula: ");
	if(cantidad==2) 
	{
		printf("\nX1: ");
		scanf("%f",&x);
		printf("Potencia de X1: ");
		scanf("%d",&po1);
		printf("Numero Independiente: ");
		scanf("%f",&ind);
	}else if(cantidad==3)
	{
		printf("\nX2: ");
		scanf("%f",&xx);
		printf("Potencia de X2: ");
		scanf("%d",&po2);
		printf("X1: ");
		scanf("%f",&x);
		printf("Potencia de X1: ");
		scanf("%d",&po1);
		printf("Numero Independiente: ");
		scanf("%f",&ind);
	}else if(cantidad==4)
	{
		printf("\nX3: ");
		scanf("%f",&xxx);
		printf("Potencia de X3: ");
		scanf("%d",&po3);
		printf("X2: ");
		scanf("%f",&xx);
		printf("Potencia de X2: ");
		scanf("%d",&po2);
		printf("X1: ");
		scanf("%f",&x);
		printf("Potencia de X1: ");
		scanf("%d",&po1);
		printf("Numero Independiente: ");
		scanf("%f",&ind);
	}else if(cantidad==5)
	{
	    printf("\nX4: ");
		scanf("%f",&xxxx);
		printf("Potencia de X4: ");
		scanf("%d",&po4);
		printf("X3: ");
		scanf("%f",&xxx);
		printf("Potencia de X3: ");
		scanf("%d",&po3);
	    printf("X2: ");
		scanf("%f",&xx);
		printf("Potencia de X2: ");
		scanf("%d",&po2);
		printf("X1: ");
		scanf("%f",&x);
		printf("Potencia de X1: ");
		scanf("%d",&po1);
		printf("Numero Independiente: ");
		scanf("%f",&ind);
	}else if(cantidad==6)
	{
	    printf("\nX5: ");
		scanf("%f",&xxxxx);
		printf("\nPotencia de X5: ");
		scanf("%d",&po5);
	    printf("\nX4: ");
		scanf("%f",&xxxx);
		printf("\nPotencia de X4: ");
		scanf("%d",&po4);
	    printf("\nX3: ");
		scanf("%f",&xxx);
		printf("\nPotencia de X3: ");
		scanf("%d",&po3);
	    printf("\nX2: ");
		scanf("%f",&xx);
		printf("\nPotencia de X2: ");
		scanf("%d",&po2);
		printf("\nX1: ");
		scanf("%f",&x);
		printf("\nPotencia de X1: ");
		scanf("%d",&po1);
		printf("\nNumero Independiente: ");
		scanf("%f",&ind);
	}else{
	    system("cls");
		printf("Cantidad De Datos No Validos\n");
		Sleep(2000);
		system("cls");
		goto inicio2;
	}
	printf("\n\nIntroduzca El Intervalo: ");
	scanf("%f %f",&a_a[i] ,&b_b[i]);
	system("cls");
	printf("\nN\t  a\t  b\t  c\t  f(a)\t  f(b)\t  f(c)\t  e\n");
	for(;fin!=1;i++)    
	{
		fa[i]=(xxxxx*pow(a_a[i],po5))+(xxxx*pow(a_a[i],po4))+(xxx*pow(a_a[i],po3))+(xx*pow(a_a[i],po2))+(x*pow(a_a[i],po1))+ind;
		fb[i]=(xxxxx*pow(b_b[i],po5))+(xxxx*pow(b_b[i],po4))+(xxx*pow(b_b[i],po3))+(xx*pow(b_b[i],po2))+(x*pow(b_b[i],po1))+ind;
		c_c[i]=((fa[i]*(a_a[i]-b_b[i]))/(fb[i]-fa[i]))+a_a[i];
		fc[i]=(xxxxx*pow(c_c[i],po5))+(xxxx*pow(c_c[i],po4))+(xxx*pow(c_c[i],po3))+(xx*pow(c_c[i],po2))+(x*pow(c_c[i],po1))+ind;
		
		printf("\n%d\t",i);
		printf("%.4f\t",a_a[i]);
		printf("%.4f\t",b_b[i]);
		printf("%.4f\t",c_c[i]);
		printf("%.4f\t",fa[i]);
		printf("%.4f\t",fb[i]);
		printf("%.4f\t",fc[i]);
		if(i>0) 
		{
			if(c_c[i-1]==0)
			{
				printf("\tInfinito");   
				break;
			}
			error=((c_c[i-1]-c_c[i])/c_c[i-1]);   
			if(error>0) 
			{
				printf("\t%.3f%",error);
			}else{
				error=(error*-1);
				printf("\t%.3f%",error);
			}
			if(error<=0.005)    
			{                   
				fin++;
			}
		}
		a_a[i+1]=c_c[i];    
		if(fc[i]>0) 
		{
			if(fb[i]<0) 
			{
				b_b[i+1]=b_b[i];
			}else if(fa[i]<0)
			{
				b_b[i+1]=a_a[i];
			}else{
			    fin++;
			    printf("\n\nNo Se Puede Resolver");
			}
		}else{
			if(fb[i]>0)
			{
				b_b[i+1]=b_b[i];
			}else if(fa[i]>0)
			{
				b_b[i+1]=a_a[i];
			}else{
		    	fin++;
		    	printf("\n\nNo Se Puede Resolver");
			}
		}
	}
	printf("\n\n");
	system("pause");
	printf("Desea Realizar Otra Operacion: s/n");
	printf("\nRespuesta: ");
	scanf("%s",&pregunta);
	}while(pregunta == 's');
}
