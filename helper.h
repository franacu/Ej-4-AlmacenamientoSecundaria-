//
// Created by Fran on 09/11/2024.
//

#ifndef EJ3_ARCHIVOS_HELPER_H
#define EJ3_ARCHIVOS_HELPER_H
typedef struct Nodo {
    char *linea;
    struct Nodo *sig;
} Nodo;
typedef struct pila
{
    Nodo *tope;
}Pila;
Pila *newPila();
void apilar(Pila *pila,const char *texto);
char *desapilar(Pila *pila);
#endif //EJ3_ARCHIVOS_HELPER_H
