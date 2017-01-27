#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
main() 
{ 
char cadena[50]; 
int tam, ciclo1, ciclo2; 
char longitud; 
puts("cadena de caracteres"); 
gets(cadena); 
tam = strlen(cadena);  
for (ciclo1=1; ciclo1<tam; ciclo1++) 
for (ciclo2=0 ; ciclo2<tam - 1; ciclo2++) 
if (cadena[ciclo2] > cadena[ciclo2+1]) 
{ 
longitud = cadena[ciclo2]; 
cadena[ciclo2] = cadena[ciclo2+1]; 
cadena[ciclo2+1] = longitud; 
} 
puts("\n\nresultado"); 
puts(cadena); 


getch(); 
}
