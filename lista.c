#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

LISTA criarLista(int tamanho) {
    LISTA novaLista;
    novaLista.vetor = (int *)malloc(tamanho * sizeof(int));
    novaLista.quantidade = tamanho;
    return novaLista;
}

void liberarLista(LISTA *lista) {
    free(lista->vetor);
    lista->vetor = NULL;
    lista->quantidade = 0;
}

void inserirElementos(LISTA *lista) {
    printf("Insira os elementos na lista:\n");
    for (int i = 0; i < lista->quantidade; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista->vetor[i]);
    }
}

void inserirElementoOrdenado(LISTA *lista, int elemento) {
    int i = lista->quantidade - 1;
    while (i >= 0 && lista->vetor[i] > elemento) {
        lista->vetor[i + 1] = lista->vetor[i];
        i--;
    }
    lista->vetor[i + 1] = elemento;
    lista->quantidade++;
}

void imprimirListaIterativo(LISTA lista) {
    printf("Elementos da lista:\n");
    for (int i = 0; i < lista.quantidade; i++) {
        printf("%d ", lista.vetor[i]);
    }
    printf("\n");
}

void imprimirListaRecursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade) {
        printf("\n");
        return;
    }

    printf("%d ", lista.vetor[indice]);
    imprimirListaRecursivo(lista, indice + 1);
}

int buscarElementoBinarioRecursivo(LISTA lista, int elemento, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (lista.vetor[meio] == elemento) {
            return meio;
        } else if (lista.vetor[meio] < elemento) {
            return buscarElementoBinarioRecursivo(lista, elemento, meio + 1, fim);
        } else {
            return buscarElementoBinarioRecursivo(lista, elemento, inicio, meio - 1);
        }
    }
    return -1;
}

int buscarMaiorElementoRecursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade - 1) {
        return lista.vetor[indice];
    }

    int maiorRestante = buscarMaiorElementoRecursivo(lista, indice + 1);
    return (lista.vetor[indice] > maiorRestante) ? lista.vetor[indice] : maiorRestante;
}

int buscarMenorElementoRecursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade - 1) {
        return lista.vetor[indice];
    }

    int menorRestante = buscarMenorElementoRecursivo(lista, indice + 1);
    return (lista.vetor[indice] < menorRestante) ? lista.vetor[indice] : menorRestante;
}

int calcularSomaRecursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade) {
        return 0;
    }

    return lista.vetor[indice] + calcularSomaRecursivo(lista, indice + 1);
}

int calcularProdutoRecursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade) {
        return 1;
    }

    return lista.vetor[indice] * calcularProdutoRecursivo(lista, indice + 1);
}

