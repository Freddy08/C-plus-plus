 /*Nombre del programa: Método de la Bisección.* Objetivo: Calcular las raíces del polinomio x20x-72*/
 #include<stdio.h>
 #include<math.h>
 #include<conio.h>
 #include <stdlib.h>
 /*VARIALBLES USADAS*/
 float xr,xi,xu,fxr1,fxi,k,ea,xr1,xr2,aux,f;
 main()
 {
 	printf("Programa del metodo de biseccion para la solucion de la funcion 20x-72.\n");
	xi=0;xu=10;xr2=0.05;
	xr1=(xi+xu)/2;
	printf("La raiz propuesta es: %f\n",xr1);
	ea=fabs(((xr1-xr2)/xr1));
	printf("El error es de: %f.",ea);
	destino:
	fxr1=(20*xr1)-72;
	printf("\nSustituyendo el valor de xr en la funcion, el resultado es:...%f\n",fxr1);
	fxi=(5*xi)-72;
	printf("\nSustituyendo el valor de xi en la funcion, el resultado es:...%f\n",fxi);
	k=fxr1*fxi;
	printf("El resultado de multiplicar las evaluaciones es: %f\n",k);
	if(k>0)
	{
		xi=xr1;xr2=(xi+xu)/2;
	}if(k<0)
	{
		xu=xr1;xr2=(xi+xu)/2;
	}if(k==0)
	{
		printf("La raiz es = %f\n",xr1);
	}
	printf("La nueva raiz es: %f.\n",xr2);
	ea=fabs(((xr2-xr1)/xr2));
	printf("El error es de: %f.\n",ea);
	if(ea<0.0001)
	{
		printf("\n\n\tEl punto donde el espfuerzo cortante es 0 es: %f\n",xr2);
		f=(pow(xr2,3))+(5*xr2)-20;
		printf("\tY la funcion evaluada en esa raiz es: %f\n",f);
		getch();
		return 0;
	}
	aux=xr2;
	xr2=xr1;
	xr1=aux;
	goto destino;
}
