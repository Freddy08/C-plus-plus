#include<stdio.h>
main()
{
	int ciclo1,ciclo2,matriza[2][2],matrizb[2];
	int R1,R2,R3,resta1,resta2,resta3;
	printf("Dame los datos de tu matriz\n");
	for(ciclo1=0;ciclo1<2;ciclo1++)
	{
	printf("\nEcuacion %d\n",ciclo1+1);
		for(ciclo2=0;ciclo2<2;ciclo2++)
		{			
			printf("\nDame los datos de a: ");
			scanf("%d",&matriza[ciclo1][ciclo2]);
		}
	printf("\n\tDame el valor de b: ");
	scanf("%d",&matrizb[ciclo1]);
	}
	printf("\n");
    for(ciclo1=0;ciclo1<2;ciclo1++)
    {
        for(ciclo2=0;ciclo2<2;ciclo2++)
        {
            printf("%d\t",matriza[ciclo1][ciclo2]);
        }
    printf("=%d \t\n",matrizb[ciclo1]);
   	printf("\n");
   	}
   	R1=matriza[1][0]*matriza[0][0];
   	R2=matriza[1][0]*matriza[0][1];
   	R3=matriza[1][0]*matrizb[0];
	resta1=-1*R1+matriza[1][0];
	resta2=-1*R2+matriza[1][1];
	resta3=-1*R3+matrizb[1];
	printf("\n\n\tLa nueva matriz seria: \n\n");
	printf("\t%d\t%d\t=\t%d\n\n",matriza[0][0],matriza[0][1],matrizb[0]);
	printf("\t%d\t%d\t=\t%d\n",resta1,resta2,resta3);
}
