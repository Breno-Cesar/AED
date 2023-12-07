#include "lista_inteiros.h"
#include <stdio.h>

void inicializarLista(ListaInteiros *lista) {
    lista->tamanho = 0;
}

void inserirOrdenado(ListaInteiros *lista, int valor) {
    if (lista->tamanho == 0) {
        lista->elementos[0] = valor;
        lista->tamanho++;
        return;
    }

    int i = lista->tamanho - 1;

    // Encontrar a posição correta para inserção
    while (i >= 0 && lista->elementos[i] > valor) {
        lista->elementos[i + 1] = lista->elementos[i];
        i--;
    }

    lista->elementos[i + 1] = valor;
    lista->tamanho++;
}

int contarOcorrencias(ListaInteiros *lista, int valor) {
    int cont = 0;

    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->elementos[i] == valor) {
            cont++;
        }
    }

    return cont;
}

