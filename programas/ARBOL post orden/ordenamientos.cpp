#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>


 int cantidad;
//inicio de programa declaración de arbol
//en forma generalo
//------------------------------------------------------------------------------

struct nodo{
	int dato;
   nodo *izquierda;
   nodo *derecha;
};

//declarado de raiz
//------------------------------------------------------------------------------

nodo *raiz;
int pf;

void init(){
	raiz = NULL;
}

//llenado de datos en el arbol
//------------------------------------------------------------------------------

void insertarv2(struct nodo ** nuevo, int numero){

   if((*nuevo) == NULL){
   	(*nuevo) = new nodo;
      (*nuevo)->dato = numero;
      (*nuevo)->izquierda = NULL;
      (*nuevo)->derecha = NULL;
   }else{
		if(numero < (*nuevo)->dato){
      	insertarv2(&(*nuevo)->izquierda, numero);
      }else{
       	insertarv2(&(*nuevo)->derecha, numero);
      }//fin del if 2
   }//fin del if 1

}//fin del void

//muestra de arbol grafico
//nuestra la estructura del arbol en forma grafica
//y el recorrdo
//------------------------------------------------------------------------------

void grafico (int x, int y, nodo *arbol, int nivel){

  	if (arbol != NULL){

  		grafico( (x-(pf - nivel)),y+2,arbol->izquierda, nivel + 1);
      gotoxy(x-1,y);cprintf("");
      gotoxy(x+1,y);cprintf("");
   	if(arbol->izquierda != NULL){
   		gotoxy((x-2),(y+1)); cprintf("/");
   	}

   	gotoxy(x,y); cprintf("%d",arbol->dato);
   	grafico(  (x+(pf - nivel)),y+2,arbol->derecha, nivel + 1);

   	if(arbol->derecha != NULL){
   		gotoxy((x+2),(y+1)); cprintf("\\");
   	}
	}
 }

//------------------------------------------------------------------------------
//Minimo del arbol

struct nodo * minimo(struct nodo* arbol){
  nodo * temp;
  temp = arbol->izquierda;
  while (temp->izquierda != NULL)
  temp = arbol->izquierda;
  return temp;
}

//------------------------------------------------------------------------------
//muestra el orden de los datos con el formato o recorrido
//PRE ORDEN

void pre_orden(struct nodo *arbol){
	if(arbol!=NULL){
   	textcolor(7);
   	cprintf("%d%s",arbol->dato,"  ");
   	pre_orden(arbol->izquierda);
   	pre_orden(arbol->derecha);
  	}
}

//------------------------------------------------------------------------------
//muestra el orden de los datos con el formato o recorrido
//IN ORDEN

void in_orden(struct nodo *arbol){
	if(arbol!=NULL){
   	in_orden(arbol->izquierda);
      textcolor(7);
      cprintf("%d%s",arbol->dato,"  ");
		in_orden(arbol->derecha);
   }
}

//------------------------------------------------------------------------------
//
// POST ORDEN

void post_orden(struct nodo *arbol){
	if(arbol!=NULL){
   	post_orden(arbol->izquierda);
   	post_orden(arbol->derecha);
   	textcolor(7);
    	cprintf("%d%s",arbol->dato,"  ");
   }
}


//------------------------------------------------------------------------------
//PANTALLA DE INGRESO

void ingresa(int cantidad){
	int n;
   for(int i=1; i<=cantidad; i++) {
   gotoxy(49,17);cprintf("   ");
	gotoxy(30,17),cprintf("Ingrese el dato ");cprintf("%d", i);cprintf(": ");
  	cin>>n;
  	insertarv2(&raiz,n);   }
}


//------------------------------------------------------------------------------

//PANTALLA DE ORDEN DE DATOS
/*menu que muestra las posibles forma de ordenar o los datos
o de recorrer el arbol*/

void mostrar(){
   Beep(800,200);
	clrscr();
  	int op;
  	textcolor(10);gotoxy(28,5),cprintf("- SELECCIONE UNA OPCION -");
  	textcolor(YELLOW);
  	gotoxy(33,7),cprintf("1.  Pre_orden");
   gotoxy(33,8),cprintf("2.  In_orden");
  	gotoxy(33,9),cprintf("3.  Post_orden");
   gotoxy(33,10);cprintf("4.  Regresar");
  	textcolor(1);
  	gotoxy(38,12),cprintf(" "),cin>>op;

  	switch(op){

   case 1:
   Beep(800,200);
      clrscr();
      gotoxy(35,1);cprintf("ARBOL BINARIO");
      pf=10;
      grafico(40,4,raiz,6);
   	textcolor(10);gotoxy(15,18);cprintf("el Pre_orden es: "); pre_orden(raiz);getch();
      mostrar();
   break;

   case 2:
      Beep(800,200);
   	clrscr();
      gotoxy(35,1);cprintf("ARBOL BINARIO");
      pf=10;
      grafico(40,4,raiz,6);
   	textcolor(10);gotoxy(15,18);cprintf("el In_orden es: ");in_orden(raiz);getch();
      mostrar();
   break;

   case 3:
      Beep(800,200);
   	clrscr();
      gotoxy(35,1);cprintf("ARBOL BINARIO");
      pf=10;
      grafico(40,4,raiz,6);
   	textcolor(10);gotoxy(15,18);cprintf("el Post_orden es: ");post_orden(raiz);getch();
      mostrar();
   break;

   case 4: Beep(800,200);break;

	default:
      Beep(800,200);
   	gotoxy(30,17);cprintf("opcion no valida"); sleep(2);
      mostrar();
  }

}

/*programa principal encargado de realizar
todas la fucniones declaradas en la parte superior
y que son llamadas por medio de su nombre distintivo*/
//------------------------------------------------------------------------------
//MENU PRINCIPAL

void main(){

	for(int h=0; h<=27; h++){ //for para pintar toda la pantalla
   	textbackground(9);

      gotoxy(1,h); cprintf("                                                                                ");
 	}

   menu:
   Beep(800,200);
   clrscr();
   int opc;
   textcolor(10);gotoxy(28,3),cprintf("- SELECCIONE UNA OPCION -");
	textcolor(YELLOW);
   gotoxy(31,6),cprintf("1. Ingresar Datos ");
   gotoxy(31,7),cprintf("2. Orden de Datos");
	gotoxy(31,8),cprintf("3. Arbol Grafico");
   gotoxy(31,9);cprintf("4. Resetear valores");
	gotoxy(31,10),cprintf("5. Salir");
   textcolor(10); gotoxy(35,12),cprintf("--> "),cin>>opc;

   	switch(opc){

    		case 1:  gotoxy(36,12);
         			cprintf("cuantos datos seran?");
         			cin>>cantidad;

         			Beep(800,200);ingresa(cantidad);


                  goto menu;

    		case 2: Beep(800,200);mostrar();goto menu;

			case 3:
    			clrscr();
      		Beep(800,200);
      		gotoxy(35,1);cprintf("ARBOL BINARIO");
      		pf=10;
      		grafico(40,4,raiz,6);
      		getch();
      		goto menu;

         case 4: init(); goto menu;

    		case 5: Beep(800,200);sleep(1); exit(0);

    	default:
      	Beep(800,200);
			gotoxy(30,16),cprintf("Opcion no Valida...");
      	sleep(2);
      	goto menu;
   }

}
