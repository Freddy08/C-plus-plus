#include<stdio.h>
#include<string.h>
main()
{
      int n,i,j,mat;
      float cal,pro;
      FILE*pf;
      printf("Ingrese el numero de alumnos: ");
      scanf("%d",&n);
      if((pf=fopen("archi.txt","w")) !=NULL)
      {
          fprintf(pf,"%d \n",n);
          for(i=0;i<n;i++)
          {
             printf("Ingrese la matricula del alumno %d: "i+1);
             scanf("%d",&mat);
             fprintf(pf,"%d \n",mat);
             for(j=0;J<5;j++)
             {
                 printf("calificaciones %d: \n"j+1);
                 scanf("%f",&cal);
                 fprintf(pf,"%f \n,cal);
             }
          }
          fclose(pf);
      }else{
            printf("el archivo no se pudo abrir");
      }
}
