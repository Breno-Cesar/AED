#ifndef LISTA_INTEIROS_H
#define LISTA_INTEIROS_H

#define MAX_ELEMENTOS 100

typedef struct {
    int elementos[MAX_ELEMENTOS];
    int tamanho;
} ListaInteiros;

void inicializarLista(ListaInteiros *lista);
void inserirOrdenado(ListaInteiros *lista, int valor);
int contarOcorrencias(ListaInteiros *lista, int valor);

#endif // LISTA_INTEIROS_H

