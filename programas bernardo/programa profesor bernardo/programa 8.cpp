/*Programa typedefl.c*/
main()
{
	typedef int entero;
	typedef float real;
	typedef double doble_prec;
	typedef char cadena;
	struct articulo
	{
		entero codigo;
		real precio;
		cadena nomb_ape[45];
	};
	typedef struct articulo registro;
}
