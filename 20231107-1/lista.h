#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int *vetor;
    int quantidade;
} LISTA;

LISTA criarLista(int tamanho);
void liberarLista(LISTA *lista);
void inserirElementos(LISTA *lista);
void inserirElementoOrdenado(LISTA *lista, int elemento);
void imprimirListaIterativo(LISTA lista);
void imprimirListaRecursivo(LISTA lista, int indice);
int buscarElementoBinarioRecursivo(LISTA lista, int elemento, int inicio, int fim);
int buscarMaiorElementoRecursivo(LISTA lista, int indice);
int buscarMenorElementoRecursivo(LISTA lista, int indice);
int calcularSomaRecursivo(LISTA lista, int indice);
int calcularProdutoRecursivo(LISTA lista, int indice);

#endif

