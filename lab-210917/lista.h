/*******************************/
/* HEADER MODULO "liste" */
/*******************************/
#ifndef LISTE
#define LISTE
#include "tipo.h"
struct elem
{
       tipo_inf inf;
       elem* pun ;
       elem* prev;
} ;

typedef elem* lista ;

lista tail(lista);
lista prev(lista);
lista insert_elem(lista, elem*);
lista delete_elem(lista, elem*);

tipo_inf head(lista);
elem* new_elem(tipo_inf);
elem* search(lista, tipo_inf);
lista inserimento_ordinato(lista, tipo_inf);
bool controlla_sovrapposizioni(lista, tipo_inf);

#endif
