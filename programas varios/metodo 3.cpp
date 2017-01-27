 #include<stdio.h> 
#include<math.h> 

float xr,xi,xu,fxr1,fxi,k,ea,xr1,xr2,aux,f; 

int main(void) 
{ 
printf("Programa del metodo de biseccion para la solucion de la funcion 2(x*x)+4x-3.\n"); 
xi=-1; 
xu=2; 
xr2=0; 
xr1=(xi+xu)/2; 
printf("La raiz propuesta es: %f\n",xr1); 
ea=fabs(((xr1-xr2)/xr1)); 
printf("El error es de: %f.",ea); 
destino: 
fxr1=(2*pow(xr1,2))+(4*xr1)-3; 
printf("\nSustituyendo el valor de xr en la funcion, el resultado es:...%f\n",fxr1); 
fxi=(2*pow(xi,2))+(4*xi)-3; 
printf("\nSustituyendo el valor de xi en la funcion, el resultado es:...%f\n",fxi); 
k=fxr1*fxi; 
printf("El resultado de multiplicar las evaluaciones es: %f\n",k); 
if(k>0) 
{ 
xi=xr1; 
xr2=(xi+xu)/2; 
} 
if(k<0) 
{ 
xu=xr1; 
xr2=(xi+xu)/2; 
} 
if(k==0) 
{ 
printf("La raiz es = %f\n",xr1); 
} 
printf("La nueva raiz es: %f.\n",xr2); 
ea=fabs(((xr2-xr1)/xr2)); 
printf("El error es de: %f.\n",ea); 
if(ea<0.0001) 
{ 
printf("\n\n\tLa raiz mas cercana es: %f\n",xr2); 
f=(2*pow(xr2,2))+(4*xr2)-3; 
printf("\tY la funcion evaluada en esa raiz es: %f\n",f); 
return 0; 
} 
aux=xr2; 
xr2=xr1; 
xr1=aux; 
goto destino; 

}
