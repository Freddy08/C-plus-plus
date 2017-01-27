#include<stdio.h>
main()
{
	int ciclo;
	float n;
	printf("n= ");
	scanf("%f",&n);
	for(ciclo=0;ciclo<n;ciclo++)
	{
		n=2*n;
	}
	printf("%.2f",n);
}
