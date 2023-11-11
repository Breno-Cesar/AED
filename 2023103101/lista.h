#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int *vetor;
    int quantidade;
} LISTA;

LISTA criarLista(int tamanho);
void liberarLista(LISTA *lista);
void inserirElementos(LISTA *lista);
void imprimirLista(LISTA lista);
int buscarElementoSequencial(LISTA lista, int elemento);
int buscarElementoOrdenado(LISTA lista, int elemento);
int buscarElementoBinario(LISTA lista, int elemento);
int buscarMaiorElemento(LISTA lista);
int buscarMenorElemento(LISTA lista);
int calcularSoma(LISTA lista);
int calcularProduto(LISTA lista);

#endif
