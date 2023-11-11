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

void imprimirLista(LISTA lista) {
    printf("Elementos da lista:\n");
    for (int i = 0; i < lista.quantidade; i++) {
        printf("%d ", lista.vetor[i]);
    }
    printf("\n");
}

int buscarElementoSequencial(LISTA lista, int elemento) {
    for (int i = 0; i < lista.quantidade; i++) {
        if (lista.vetor[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int buscarElementoOrdenado(LISTA lista, int elemento) {
    for (int i = 0; i < lista.quantidade; i++) {
        if (lista.vetor[i] == elemento) {
            return i;
        } else if (lista.vetor[i] > elemento) {
            return -1;
        }
    }
    return -1;
}

int buscarElementoBinario(LISTA lista, int elemento) {
    int inicio = 0;
    int fim = lista.quantidade - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (lista.vetor[meio] == elemento) {
            return meio;
        } else if (lista.vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int buscarMaiorElemento(LISTA lista) {
    int maior = lista.vetor[0];
    for (int i = 1; i < lista.quantidade; i++) {
        if (lista.vetor[i] > maior) {
            maior = lista.vetor[i];
        }
    }
    return maior;
}

int buscarMenorElemento(LISTA lista) {
    int menor = lista.vetor[0];
    for (int i = 1; i < lista.quantidade; i++) {
        if (lista.vetor[i] < menor) {
            menor = lista.vetor[i];
        }
    }
    return menor;
}

int calcularSoma(LISTA lista) {
    int soma = 0;
    for (int i = 0; i < lista.quantidade; i++) {
        soma += lista.vetor[i];
    }
    return soma;
}

int calcularProduto(LISTA lista) {
    int produto = 1;
    for (int i = 0; i < lista.quantidade; i++) {
        produto *= lista.vetor[i];
    }
    return produto;
}

