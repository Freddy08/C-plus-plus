#include<stdio.h>
#include<conio.h>
main()
{
	int e1,e2,e3;
	float prom;
	printf("Teclea la edad de la primera persona ");
	scanf("%d",&e1);
	printf("Teclea la edad de la segunda persona ");
	scanf("%d",&e2);
	printf("Teclea la edad de la tercera persona ");
	scanf("%d",&e3);
	prom=(e1+e2+e3);/*tener siempre la presencia de operadores*/
	printf("El promedio de la edad de las 3 personas es %f",prom);	
}
