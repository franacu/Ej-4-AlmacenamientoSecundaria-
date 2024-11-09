//
// Created by Fran on 09/11/2024.
//
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "helper.h"
Pila *newPila()
{
    Pila *aux=malloc(sizeof (Pila));
    if(aux==NULL)
    {
        printf("No hay almacenamiento\n");
        return 0;
    }
    aux->tope=NULL;
    return aux;
}
void apilar(Pila *pila,const char *texto)
{
    Nodo *nodoAI= malloc(sizeof(Nodo));
    nodoAI->linea=strdup(texto);
    if(pila->tope==NULL)
    {
        pila->tope=nodoAI;
    }else
        {
            nodoAI->sig=pila->tope;
            pila->tope=nodoAI;
        }
}
char *desapilar(Pila *pila)
{
    if (pila->tope == NULL) {
        printf("Pila vacia\n");
        return NULL;
    }
    Nodo *nodo = pila->tope;
    char *texto = nodo->linea;
    pila->tope = nodo->sig;
    free(nodo);
    return texto;
}
