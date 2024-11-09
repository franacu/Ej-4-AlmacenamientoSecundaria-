//Escriba un programa que lea la información en un archivo y guarde cada línea en una pila.
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

int main()
{
    Pila *pila=newPila();
    char archivo[]="ejercicio3.txt";
    FILE *fp;
    fp= fopen(archivo,"r");
    if(fp==NULL)
    {
        printf("No esta creado\n");
        return -1;
    }else
        {
            printf("Creado con exito\n");
            fclose(fp);
            fp = fopen(archivo, "a");
            if (fp != NULL) {
                fprintf(fp, "Quiero guardar con exito esto\n");
                fprintf(fp, "HOLAAAAAA\n");
                fclose(fp);
            }
        }
    fp= fopen(archivo,"r");
    //Ya cree y almacene info en archivo...ahora, quiero guardar la informacion en una pila...
    char linea[256];
    while (fgets(linea,sizeof(linea),fp)!=NULL)
    {
        apilar(pila,linea);
    }
    fclose(fp);

    char *lineaDesapilada;
    while ((lineaDesapilada = desapilar(pila)) != NULL)
    {
        printf("%s",lineaDesapilada);
        free(lineaDesapilada);
    }

    return 0;
}