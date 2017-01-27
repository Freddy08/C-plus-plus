#include <stdio.h>
#include <conio.h>
#include <string.h>
struct {
int clave;
char nombre[30];
int edad;} animalito;
main() {
// cargando clave a buscar
printf("dame clave editar:");
int claveb; scanf("%d",&claveb);
//abriendo, leyendo,cargando estructura
FILE *archdisco;
archdisco = fopen("cpp:\\ac\\archivo1.dat","rb+");
// usar fseek() para posicionarse al principio de registro buscado
fseek (archdisco, (long)(claveb)* sizeof(animalito), 0 );
// ahora se lee el registro
fread(&animalito,sizeof(animalito),1,archdisco);
// desplegando estructura y asegurandose
printf("%d ",animalito.clave);
printf("%s ",animalito.nombre);
printf("%d ",animalito.edad);
printf("\n");getchar();
//recapturando los nuevos datos
printf("dame nuevo nombre :");gets(animalito.nombre);
printf("dame nueva edad :");scanf("%d",&animalito.edad);
// regresando a apuntador para regrabar
fseek (archdisco, (long)(claveb)* sizeof(animalito), 0 );
fwrite(&animalito,sizeof(animalito),1,archdisco);
// no olvidar cerrar archivo
fclose(archdisco);
//avisando
printf("REGISTRO EDITADO");
getchar();getchar();
}
