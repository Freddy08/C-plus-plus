#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
   float a[3],b[3],c[3],d[3],delta,x1,x2,x3;
   int ciclo;
   printf("\tSistema de 2 incognitas con el metodo de camer\n");
   printf("\tEl programa solo acepta numeros decimales o/y reales\n\tcualquier fraccion se tendra que poner en decimal");
   for(ciclo=0;ciclo<3;ciclo++)
   {
   	printf("\nEcuacion #%d",ciclo+1);
   	printf("\na1= ");
   	scanf("%f",&a[ciclo]);
   	printf("\nb2= ");
   	scanf("%f",&b[ciclo]);
   	printf("\nc3= ");
   	scanf("%f",&c[ciclo]);
   	printf("\nd%d= ",ciclo+1);
   	scanf("%f",&d[ciclo]);
   }
   for(ciclo=0;ciclo<3;ciclo++)
   {
   	printf("\n%f a + %f b + %f c = %f d",a[ciclo],b[ciclo],c[ciclo],d[ciclo]);
   }
   if(b[0]>0)
   {
   	  delta=a[0]*((b[1]*c[2])-(b[2]*c[1]))+b[0]*((a[1]*c[2])-(a[2]*c[1]))+c[0]*((a[1]*b[2])-(a[2]*b[1]));
   }
   if(b[0]<0)
   {
   	  delta=a[0]*((b[1]*c[2])-(b[2]*c[1]))-b[0]*((a[1]*c[2])-(a[2]*c[1]))+c[0]*((a[1]*b[2])-(a[2]*b[1]));
   }
   if(b[0]>0)
   {
   	  x1=d[0]*((b[1]*c[2])-(b[2]*c[1]))+b[0]*((d[1]*c[2])-(d[2]*c[1]))+c[0]*((d[1]*b[2])-(d[2]*b[1]));
   	  x1=x1/delta;
   }
   if(b[0]<0)
   {
   	  x1=d[0]*((b[1]*c[2])-(b[2]*c[1]))-b[0]*((d[1]*c[2])-(d[2]*c[1]))+c[0]*((d[1]*b[2])-(d[2]*b[1]));
   	  x1=x1/delta;
   }
   if(d[0]>0)
   {
   	  x2=a[0]*((d[1]*c[2])-(d[2]*c[1]))+d[0]*((a[1]*c[2])-(a[2]*c[1]))+c[0]*((a[1]*d[2])-(a[2]*d[1]));
   	  x2=x2/delta;
   }
   if(d[0]<0)
   {
   	  x2=a[0]*((d[1]*c[2])-(d[2]*c[1]))-d[0]*((a[1]*c[2])-(a[2]*c[1]))+c[0]*((a[1]*d[2])-(a[2]*d[1]));
   	  x2=x2/delta;
   }
   if(b[0]>0)
   {
   	  x3=a[0]*((b[1]*d[2])-(b[2]*d[1]))+b[0]*((a[1]*d[2])-(a[2]*d[1]))+d[0]*((a[1]*b[2])-(a[2]*b[1]));
   	  x3=x3/delta;
   }
   if(b[0]<0)
   {
   	  x3=a[0]*((b[1]*d[2])-(b[2]*d[1]))-b[0]*((a[1]*d[2])-(a[2]*d[1]))+d[0]*((a[1]*b[2])-(a[2]*b[1]));
   	  x3=x3/delta;
   }
   printf("\ndelta= %f",delta);
   printf("\nX1= %f",x1);   
   printf("\nX2= %f",x2);
   printf("\nX3= %f",x3);
getch();
}
