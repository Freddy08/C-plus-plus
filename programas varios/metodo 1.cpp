
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#include<stdlib.h> 


double funcion(float X); //declaracion de la funcion. 

int main(void){ 
int SI=1; 
do{ 
system("cls" ); 
float Xi=0, Xu=0,error=0,Xn=0,Xr=0,promedio=0,p=0; 
int cont=0; 

printf("\t\t\tPRACTICA #2\n" ); 
printf("\t\t METODO DE BISECCION\n" ); 
printf("\t basado en una practica de salo\n\n\n\n" ); 
printf("introduce Xu:\n" ); 
scanf("%f",&Xu); 
printf("\nintroduce Xi:\n" ); 
scanf("%f",&Xi); 
printf("Xu Xi Xr f(Xu) f(Xi) f(Xr) error\n" ); 
Xr=(Xi+Xu)/2; 
printf("%.2f %.2f %.2f",Xu,Xi,Xr); 
do{ 
promedio=funcion(Xu)*funcion(Xr); 
if(promedio==0) 
printf("La raiz es %f\n",Xi); 
else 
if(promedio<0) 
Xi= Xr; 
else 
Xu= Xr; 
Xn=(Xi+Xu)/2; 
error=fabs((Xn-Xr)/Xn)*100; 
printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f%\n",Xu,Xi,Xn,funcion(Xu),funcion(Xi),funcion(Xr),error); 
Xr=Xn; 
cont++; 
}while(cont<6); 
printf("\n\n\n"); 
printf("DESEAS REALIZAR LA OPERACION OTRA VEZ? SI[1] NO[2]\n" ); 
scanf("%d",&SI); 

}while(SI<=1); 
system("PAUSE" ); 
return 0; 
} 


double funcion(float X){ //funcion que desp es llamada dentro del main. 
return pow(X,4)+3*pow(X,3)-2; 
} 
