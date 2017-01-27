#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int ciclo;
	float x1[2],y1[2],c1[2],delta,xtestada,ytestada;
	char res[3],cor[]="si",fal[]="no";
	printf("\tSistema de 2 incognitas con el metodo de camer\n");
	printf("\tEl programa solo acepta numeros decimales o/y reales\n\tcualquier fraccion se tendra que poner en decimal");
    et1:
    ciclo=0;
	for(;ciclo<2;ciclo++)
    {
    	printf("\n\nEcuacion numero %d",ciclo+1);
    	printf("\nX= ");
    	scanf("%f",&x1[ciclo]);
    	printf("\nY= ");
    	scanf("%f",&y1[ciclo]);
    	printf("\nC%d= ",ciclo+1);
    	scanf("%f",&c1[ciclo]);
    }
    for(ciclo=0;ciclo<2;ciclo++)
    {
    	printf("\n%f X + %f Y = %f C",x1[ciclo],y1[ciclo],c1[ciclo]);
    }
    printf("\n\nEstan correctos tus datos?");
    printf("\nResponde con un si o un no minusculas");
    printf("\nRespuesta: ");
    scanf("%s",res);
    if(strcmp(res,fal)==0)
    {
    	system("cls");
		printf("Vuelve a dar tus datos");
    	goto et1;
    }
	if(strcmp(res,cor)==0)
    {
    	system("cls");
    	delta=x1[0]*y1[1]-x1[1]*y1[0];
    	printf("\nDelta= %f",delta);
    	if(delta != 0)
    	{
    		xtestada=(y1[0]*c1[1]-y1[1]*c1[0])/delta;
    		ytestada=(c1[0]*x1[1]-c1[1]*x1[0])/delta;
    		printf("\nX1= %f",xtestada);
    		printf("\nY1= %f",ytestada);
			goto et2;    		
    	}else
    	{
    		printf("\nLa ecuacion no tiene solucion");
    		et2:
   		 	printf("\nQuieres introducir nuevos datos?");
    		printf("\nRespuesta: ");
   			scanf("%s",res);
   			if(strcmp(res,cor)==0)
   			{
   				system("cls");
				printf("Vuelve a dar tus datos");
    			goto et1;
   			}else if(strcmp(res,fal)==0)
   			{
   				printf("gracias por utilizar el programa");
   			}
   		 }
   	}
}
