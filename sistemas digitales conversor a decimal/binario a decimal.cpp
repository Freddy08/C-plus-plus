/*Este programa convierte de binario 
   a decimal */

 #include <stdio.h>
 #define Tamano 35

 // La variable Tamano se fija en 35
 // porque los enteros de cuatro bytes
 // ocupan 32 bits y la ultima entrada
 // de una cadena en un arreglo es \n
 /*Prototipo de funcion Recibe*/
 /* Esta funcion recibe la cadena
    pero no verifica que sea valida */

 void Recibe( int a[]);

 /*Prototipo de funcion Imprime*/
 /* Si la cadena es valida se calcula
 e imprime su equivalente decimal, si no
 se manda un mensaje al usuario y se termina
 el programa */

 void Imprime( int b[]);

 /*///////////////////////////////
 // MAIN
 ////////////////////////////////*/ 

 int main()
 {       // Abre main 
 int arreglo[Tamano];
 // En este arreglo se recibiran los valores
 // de la cadena binaria 
 int evaluar;
 // La variable evaluar lleva el control
 // de la legalidad de la cadena, es decir
 // se introducen los unicos digitos validos 0, 1
 // o se introducen valores invalidos como
 // 9

 // Un  mensaje que avisa al usuario que
 // hace el programa
 printf("\nEste programa recibe un numero "
         "binario y lo convierte a decimal.\n");

 // Se invoca a la funcion Recibe y se le envia
 // la direccion de la primera posicion de arreglo
 Recibe(arreglo);
 // Se calcula e imprime el valor decimal, de 
 // nuevo por referencia 
 Imprime(arreglo);
 return 0;

 }       // Cierra main

 /*////////////////////////////////////
 // FUNCION RECIBE
 ////////////////////////////////////*/

 void Recibe( int a[])
 {  // Abre Recibe 
 /* En el arreglo a se guardaran las 
   entradas de la cadena*/
 int i = 0;
 /* La variable i sirve como contador
    en varios ciclos */
 for( i = 0; i < Tamano; i++ )
 a[i] = ' ';
 // Las entradas se inicializan a ' ' 
 printf("\nIntroduzca un numero binario: \n");

 /*El siguiente while recibe la cadena y la
   asigna al arreglo en una sola linea.
   Observe que al final hay un ;  */

 i = 0;
 // Se pone i = 0
 while ( (a[i++] = getchar()) != '\n' && Tamano > i );
 printf("\n");
 }  // Cierra Recibe 

 /*/////////////////////////////////////
 // FUNCION IMPRIME
 /////////////////////////////////////*/

 void Imprime( int b[] )

 {  // Abre Imprime

 int i;
 int potencia = 1;
 // La variable potencia lleva el valor de la
 // potencia de 2 por la cual se va a multiplicar
 // el digito almacenado dependiendo de su posicion

 int decimal = 0;
 // El equivalente decimal de la cadena binaria 
 // se inicia a 0
 int inicio;
 // La variable inicio se encarga de registrar
 // en donde empieza el primer digito de la cadena.
 // Esta cadena debe leerse de izquierda a derecha.

 // Este ciclo for busca de atras para 
 // adelante el primer digito distinto
 // de ' ' en el arreglo. A partir de
 // ahi se empieza a evaluar el numero
 // binario 

 for ( i = Tamano - 1; i >= 0; i-- )
 {  // Abre for
 if ( ' ' != b[i] )
 {  // abre if  
 inicio = i;
 break; // sale de for
 }   // Cierra if
 }  // Cierra for

 // Este ciclo for evalua cada una de las
 // entradas del arreglo que fueron introducidas 
 // por el usuario, las multiplica por la potencia 
 // de 2 correspondiente a su posicion y los
 // productos los va sumando. La suma total sera
 // el valor decimal del numero. 

 int valido = 1;
 // Si el binario recibido no es valido, no 
 // se puede calcular su valor decimal. Esta 
 // variable controla eso. En principio se establece
 // en 1 o cierto, ya que se asume que el usuario 
 // introdujo un numero valido

  for ( i = inicio; i >= 0; i-- )
 {  // Abre for
 switch( b[i] )
 {  // Abre switch
 case '0':
 decimal += 0*potencia;
 potencia *= 2;
 break;
 case '1':
 decimal += 1*potencia;
 potencia *= 2;
 break;
 default:
 if ( '\n' != b[i])
 {  // Abre if
printf("\nERROR. LA CADENA NO ES VALIDA!\n");
 valido = 0;  // El binario recibido no 
              // es valido
 printf("\nEste caracter no es valido: ");
 putchar(b[i]);
 printf("\n");
 } // Cierra if
 break;
 }   // Cierra switch
 }  // Cierra for  

 if ( 1 == valido )
 printf("\nEl valor decimal es: %d\n", decimal);
 else
 printf("\nEl numero introducido no es valido.\n");

 }	  // Cierra Imprime
