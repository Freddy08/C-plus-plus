#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
main()
{
      int cantidad,ciclo=0,fin=0,res=0;
      int po1=1,po2=1,po3=1,po4=1,po5=1;
      float x5=0,x4=0,x3=0,x2=0,x1=0,ind=0,a[100],b[100],c[100], fa[100], fb[100], fc[100],error;
      et1: 
      system("cls");     
      printf("\t    Metodo de  la posicion falsa\n");
      printf("\t  \"Los datos son de 1 a 5 cantidades\"    \n\tNota:Sin contar el numero independiente");
      printf("\t   \n\nCuantos datos se introducira? R= ");
      scanf("%d",&cantidad);
      switch(cantidad)
      {
		case 2:
			{
				printf("\nX1: ");
				scanf("%f",&x1);
				printf("\nCual es la elevacion X1: ");
				scanf("%d",&po1);
				printf("\nC: ");
				scanf("%f",&ind);	
			}
		break;
		case 3:
			{
				printf("\nX2: ");
				scanf("%f",&x2);
				printf("\nCual es la elevacion X2: ");
				scanf("%d",&po2);
				printf("\nX1: ");
				scanf("%f",&x1);
				printf("\nCual es la elevacion X1: ");
				scanf("%d",&po1);
				printf("\nC:");
				scanf("%f",&ind);
			}
		break;	
		case 4:
			{
				printf("\nX3: ");
				scanf("%f",&x3);
				printf("\nCual es la elevacion X3: ");
				scanf("%d",&po3);
				printf("\nX2: ");
				scanf("%f",&x2);
				printf("\nCual es la elevacion X2: ");
				scanf("%d",&po2);
				printf("\nX1: ");
				scanf("%f",&x1);
				printf("\nCual es la elevacion X1: ");
				scanf("%d",&po1);	
				printf("\nC:");
				scanf("%f",&ind);
			}
		break;
		case 5:
			{
				printf("\nX4: ");
				scanf("%f",&x4);
				printf("\nCual es la elevacion X4: ");
				scanf("%d",&po4);
				printf("\nX3: ");
				scanf("%f",&x3);
				printf("\nCual es la elevacion X3: ");
				scanf("%d",&po3);
			    printf("\nX2: ");
				scanf("%f",&x2);
				printf("\nCual es la elevacion X2: ");
				scanf("%d",&po2);
				printf("\nX1: ");
				scanf("%f",&x1);
				printf("\nCual es la elevacion X1: ");
				scanf("%d",&po1);
				printf("\nC:");
				scanf("%f",&ind);
			}
		break;
		case 6:
		{	
			    printf("\nX5: ");
				scanf("%f",&x5);
				printf("\nCual es la elevacion X5: ");
				scanf("%d",&po5);
			    printf("\nX4: ");
				scanf("%f",&x4);
				printf("\nCual es la elevacion X4: ");
				scanf("%d",&po4);
			    printf("\nX3: ");
				scanf("%f",&x3);
				printf("\nCual es la elevacion X3: ");
				scanf("%d",&po3);
			    printf("\nX2: ");
				scanf("%f",&x2);
				printf("\nCual es la elevacion X2: ");
				scanf("%d",&po2);
				printf("\nX1: ");
				scanf("%f",&x1);
				printf("\nCual es la elevacion X1: ");
				scanf("%d",&po1);
				printf("\nC:");
				scanf("%f",&ind);
		}
		break;
		default:
		{
				printf("\n\n\tCantidad De Datos No Validos\n");
				getch();
				goto et1;
		}
 	}
 	printf("\n\nintroduce el intervalo [a]: ");
 	scanf("%f",&a[ciclo]);
 	printf("\n\nintroduce el intervalo [b]: ");
 	scanf("%f",&b[ciclo]);
 	for(int i=0;i<3;i++)
    {
	    system("cls");
   		printf("Cargando");
    	Sleep(300);
    	system("cls");
    	printf("Cargando.");
    	Sleep(300);
    	system("cls");
    	printf("Cargando..");
    	Sleep(300);
    	system("cls");
    	printf("Cargando...");
    	Sleep(300);
	}
	system("cls");
 	printf("\nN\t  a\t  b\t  c\t  f(a)\t  f(b)\t\tf(c)\t   Diferencia\n");
	for(;fin != 1;ciclo++)    
	{
		fa[ciclo]=(x5*pow(a[ciclo],po5))+(x4*pow(a[ciclo],po4))+(x3*pow(a[ciclo],po3))+(x2*pow(a[ciclo],po2))+(x1*pow(a[ciclo],po1))+ind;
		fb[ciclo]=(x5*pow(b[ciclo],po5))+(x4*pow(b[ciclo],po4))+(x3*pow(b[ciclo],po3))+(x2*pow(b[ciclo],po2))+(x1*pow(b[ciclo],po1))+ind;
		c[ciclo]=((fa[ciclo]*(a[ciclo]-b[ciclo]))/(fb[ciclo]-fa[ciclo]))+a[ciclo];
		fc[ciclo]=(x5*pow(c[ciclo],po5))+(x4*pow(c[ciclo],po4))+(x3*pow(c[ciclo],po3))+(x2*pow(c[ciclo],po2))+(x1*pow(c[ciclo],po1))+ind;  
        printf("\n%d\t%.4f\t%.4f\t%.4f  %.4f  %.4f\t%.4f\t",ciclo,a[ciclo],b[ciclo],c[ciclo],fa[ciclo],fb[ciclo],fc[ciclo]);
        if(ciclo>0) 
		{
			if(c[ciclo-1]==0)
			{
				printf("\tC es infinito");   
				break;
			}
			error=((c[ciclo-1]-c[ciclo])/c[ciclo-1]);   
			if(error>0) 
			{
				printf("\t%.3f%",error);
			}else
            {
				error=(error*-1);
				printf("\t%.3f%",error);
			}
			if(error<=0.005)    
			{                   
				fin++;
			}
		}
		a[ciclo+1]=c[ciclo];    
		if(fc[ciclo]>0) 
		{
			if(fb[ciclo]<0) 
			{
				b[ciclo+1]=b[ciclo];
			}else if(fa[ciclo]<0)
			{
				b[ciclo+1]=a[ciclo];
			}else
            {
			    fin++;
			    printf("\n\nNo Se Puede Resolver");
			}
		}else{
			if(fb[ciclo]>0)
			{
				b[ciclo+1]=b[ciclo];
			}else if(fa[ciclo]>0)
			{
				b[ciclo+1]=a[ciclo];
			}else
            {
		    	fin++;
		    	printf("\n\nNo Se Puede Resolver");
			}
		}
	}
    printf("\nQuieres hacer otra formula? si=1 no=0\nR= ");
    scanf("%d",&res);
    if(res==1)
    {
        goto et1;
    }
}
