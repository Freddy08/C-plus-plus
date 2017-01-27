/*Programa esuni.c*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	union almacen
	{
		struct arti
		{
			char codigo[7];
			char articulo[20];
			char descripcion[35];
			long int precio;
			int exis;
		};struct arti a;
		struct pedidos
		{
			char cod[7];
			int ped;
		};struct pedidos p;
	};union almacen al;
	printf("Introduzca elcodigo del articulo (maximo 6 caracteres)");
	gets(al.a.codigo);
	printf("\nEl codigo en la estructura arti es: %s",al.a.codigo);
	printf("\nEspacio reservado para union arti %d\n",sizeof(union almacen));
}
