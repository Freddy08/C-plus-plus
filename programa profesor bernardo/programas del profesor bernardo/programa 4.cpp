#include<stdio.h>
#include<dos.h>
main()
{
	struct time t;
	gettime(&t);
	printf("La hora actual es:%2d:%2d:%2d.%2d\n",t.ti_hour,t.ti_min,t.ti_sec,t.ti_hund);
}

