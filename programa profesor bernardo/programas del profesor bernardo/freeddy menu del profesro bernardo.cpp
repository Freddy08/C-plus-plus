#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
	char respuesta,producnuevo[100],nombre[100],apellidoP[100],apellidoM[100],puesto[100];
	char nombreproducto[100],descripcion[100];
	int ciclo,clave,modificar,opc,num_usuario,num_producto,ciclo1=0,res;
	float pnuevo,precio;
	FILE *pf;
	et2:
	printf("\t            Univercidad Autonoma De Chiapas");
	printf("\n\t       Licenciatura en Sistemas Computacionales");
	printf("\n\t              Alumno: Freddy Serrano Ochoa");
	printf("\n\n\nBienvenido al menu");
	printf("\nEscoja la accion a realizar");
	printf("\n1.-Altas\n2.-Bajas\n3.-Modificaciones\n4-.Consultas\n5.-Salir\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case (1):
			et1:
			system("cls");
			printf("En esta opcion usted puede dar de alta a un usuario con nombre apellidos y\npuesto de trabajo");
			printf(". Tambien puede dar de alta a un producto con nombre, precio y su respectiva descricion");
			printf("\nQue desea hacer?\n1.-Alta a usuario\n2.-Alta a producto\n3.-Regresar al menu\n");
			scanf("%d",&res);
			if(res==1)
			{
				num_usuario=0;
				printf("Cuantos usuarios quieres ingresar? ");
				scanf("%d",&num_usuario);				
				pf=fopen("datos usuario.txt","aw+");
				for(ciclo=0;ciclo<num_usuario;ciclo++)
				{
				
					for(ciclo1=0;ciclo1<num_usuario;ciclo1++)
					{				
						system("cls");
						printf("\nNombre del usuario numero %d: ",ciclo1+1);
						scanf("%s",&nombre);
						fprintf(pf,"Nombre: %s\n",nombre);
						printf("\nApellido paterno del usuario: ");
						scanf("%s",&apellidoP);
						printf("\nApellido materno del usuario: ");
						scanf("%s",&apellidoM);
						fprintf(pf,"Apellidos: %s %s\n",apellidoP,apellidoM);
						printf("\nPuesto de trabajo: ");
						scanf("%s",&puesto);
						fprintf(pf,"Puesto: %s\n",puesto);
					}
				}
				fflush(pf);
				fclose(pf);
				printf("\nLos datos fueron guardados corectamente");
				printf("\nencontrara los datos en la carpeta raiz del programa para su revicion");
				getch();
				goto et1;					
			}else if(res==2)
			{
				num_producto=0;
				printf("Cuantos productos quiere ingresar? ");
				scanf("%d",&num_producto);
				pf=fopen("datos productos.txt","aw+");
				for(ciclo1=0;ciclo1<num_producto;ciclo1++)
				{
					system("cls");
					printf("Dame la clave del producto: ");
					scanf("%d",&clave);
					fprintf(pf,"%d ",clave);
					printf("Nombre del producto: ");
					scanf("%s",&nombreproducto);
					printf("Precio: $");
					scanf("%f",&precio);
					fprintf(pf,"%s %.2f\n",nombreproducto,precio);
				}
				fflush(pf);
				fclose(pf);
				printf("\nLos datos fueron guardados corectamente");
				printf("\nencontrara los datos en la carpeta raiz del programa para su revicion");
				getch();
				goto et1;
			}else if(res==3)
			{
				system("cls");
				goto et2;
			}
		break;
		case (2):
			et5:
			system("cls");
			printf("En esta opcion usted puede dar de baja (Eliminar) un usuario o producto");
			printf("\nQue desea hacer?\n1.-Baja a usuario\n2.-Baja a producto\n3.-Regresar al menu\n");
			scanf("%d",&res);
			if(res==1)
			{ 
				int re;
				printf("Quieres borrar todo el contenido del archivo de usuarios? si=1/no=0\n");
				scanf("%d",&re);
				if(re==1)
				{
					if( remove( "datos usuario.txt" ) != 0 )
					{
						perror( "Error al encontrar el archivo" );
					}else
					{
						printf("Borrado del archivo exitoso" );
					}
					getch();
					goto et5;
				}else if(re==0)
				{
					goto et5;
				}
			}else if(res==2)
			{
				int re;
				printf("Quieres borrar todo el contenido del archivo de producto? si=1/no=0\n");
				scanf("%d",&re);
				if(re==1)
				{
					if( remove( "datos productos.txt" ) != 0 )
					{
						perror( "Error al encontrar el archivo" );
					}else
					{
						printf("Borrado del archivo exitoso" );
					}
					getch();
					goto et5;
				}else if(re==0)
				{
					goto et5;
				}
			}else if(res==3)
			{
				system("cls");
				goto et2;
			}
		break;
		case (3):
			et4:
			system("cls");
			printf("En esta opcion usted puede modificar datos a un usuario o producto");
			printf("\nQue desea hacer?\n1.-Modificar datos de un usuario\n2.-Modificar datos de un producto\n3.-Regresar al menu\n");		
			scanf("%d",&res);
			printf("\n\n");
			if(res==1)
			{
				
			}else if(res==2)
			{
				
			}else if(res==3)
			{				
				system("cls");
				goto et2;			
			}		
		break;
		case (4):
			et3:
			system("cls");
			printf("En esta opcion usted puede visualizar los datos de los usuarios o de los productos");
			printf("\nQue desea hacer?\n1.-Visualizar datos de usuarios\n2.-Visualizar datos de productos\n3.-Regresar al menu\n");		
			scanf("%d",&res);
			if(res==1)
			{
				pf=fopen("datos usuario.txt","rb");
				if(pf==NULL)
				{
					perror("Error en la apertura de archivos");
					getch();
					goto et3;
				}else
				{
					char caracter;
					while(feof(pf)==0)
					{
						caracter=fgetc(pf);
						printf("%c",caracter);
					}
					fflush(pf);
					fclose(pf);
					printf("\n\n\tTeclee cualquier boton para volver al menu");
					getch();
					goto et3;
				}
			}else if(res==2)
			{
				pf=fopen("datos productos.txt","rb");
				if(pf==NULL)
				{
					perror("Error en la apertura de archivos");
					getch();
					goto et3;
				}else
				{
					char caracter;
					while(feof(pf)==0)
					{
						caracter=fgetc(pf);
						printf("%c",caracter);
					}
					fflush(pf);
					fclose(pf);
					printf("\n\n\tTeclee cualquier boton para volver al menu");
					getch();
					goto et3;
				}
			}else if(res==3)
			{
				system("cls");
				goto et2;
			}		
		break;
		case (5):
			system("cls");
			printf("  Gracias por utilizar el programa vuelva pronto!!!!!!");
		break;
	}
getch();
}
