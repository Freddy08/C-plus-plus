#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	float dinero,dolar,resultado;
	int opcion,op2,bandera=0;
	do
	{
		et1:
		system("cls");
		printf("Programa para convertir monedas extranjeras a pesos y biseversa");
		printf("\nEscoja la moneda a convertir: ");
		printf("\n1.-Pesos\n2.-Dolar\n3.-Euros\n4.-Quetzal\n5.-Salir\n\tR: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
			{
				system("cls");
				printf("Ingrese la cantidad: ");
				scanf("%f",&dinero);
				et2:
				printf("\n1.-Dolar\n2.-Euros\n3.-Quetzal\n4.-Salir\n\tR: ");
				scanf("%d",&op2);
				if(op2==1)
				{
					printf("A cuanto esta el dolar? ");
					scanf("%f",&dolar);
					resultado=dinero/dolar;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et2;
				}if(op2==2)
				{
					printf("A cuanto esta el euros? ");
					scanf("%f",&dolar);
					resultado=dinero/dolar;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et2;
				}if(op2==3)
				{
					printf("A cuanto esta el quetzal? ");
					scanf("%f",&dolar);
					resultado=dinero/dolar;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et2;
				}else if(op2==4)
				{
					goto et1;
				}
			}
			case 2:
			{
				system("cls");
				printf("Ingrese la cantidad: ");
				scanf("%f",&dinero);
				et3:
				printf("\n1.-Pesos\n2.-Euros\n3.-Quetzal\n4.-Salir\n\tR: ");
				scanf("%d",&op2);
				if(op2==1)
				{
					printf("A cuanto esta el Pesos? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et3;
				}if(op2==2)
				{
					printf("A cuanto esta el euros? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et3;
				}if(op2==3)
				{
					printf("A cuanto esta el quetzal? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et3;
				}else if(op2==4)
				{
					goto et1;
				}
			}
			case 3:
			{
				et4:
				system("cls");
				printf("Ingrese la cantidad: ");
				scanf("%f",&dinero);
				printf("\n1.-Pesos\n2.-Dolar\n3.-Quetzal\n4.-Salir\n\tR: ");
				scanf("%d",&op2);
				if(op2==1)
				{
					printf("A cuanto esta el pesos? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et4;
				}if(op2==2)
				{
					printf("A cuanto esta el dolar? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et4;
				}if(op2==3)
				{
					printf("A cuanto esta el quetzal? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et4;
				}else if(op2==4)
				{
					goto et1;
				}
			}case 4:
			{
				et5:
				system("cls");
				printf("Ingrese la cantidad: ");
				scanf("%f",&dinero);
				printf("\n1.-Pesos\n2.-Dolar\n3.-Euros\n4.-Salir\n\tR: ");
				scanf("%d",&op2);
				if(op2==1)
				{
					printf("A cuanto esta el pesos? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et4;
				}if(op2==2)
				{
					printf("A cuanto esta el dolar? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et4;
				}if(op2==3)
				{
					printf("A cuanto esta el euros? ");
					scanf("%f",&dolar);
					resultado=dolar/dinero;
  	 	            for(int ciclo=0;ciclo<3;ciclo++)
  		  			{
		  	 		 	system("cls");
 	 			 		printf("Cargando");
 	 				  	Sleep(300);
	 	   		 		system("cls");
 	  		  		  	printf("Cargando.");
 		   				Sleep(300);
 					   	system("cls");
  					  	printf("Cargando..");
 					   	Sleep(300);
 					   	system("cls");
  					  	printf("Cargando...");
  					  	Sleep(300);
					}
					system("cls");
					printf("Resultado: $%.2f",resultado);
					getch();
					system("cls");
					goto et4;
				}else if(op2==4)
				{
					goto et1;
				}
			}
			case 5:
			{
				printf("Gracias po utilizar el programa!!!!!");
				bandera++;
			}
		}
	}while(bandera==1);
}
