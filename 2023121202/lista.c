#include "lista.h"

void inicializarLista(Lista* lista) {
    lista->tamanho = 0;
}

void percorrerConstruirL1a(Lista* lista, Lista* l1a) {
    inicializarLista(l1a);

    if (lista->tamanho <= 1) {
        // Lista original tem menos de dois elementos
        return;
    }

    for (int i = 1; i < lista->tamanho; i++) {
        l1a->elementos[i - 1] = lista->elementos[i];
    }

    l1a->elementos[lista->tamanho - 1] = lista->elementos[0];
    l1a->tamanho = lista->tamanho - 1;
}

void percorrerConstruirL1b(Lista* lista, Lista* l1b) {
    inicializarLista(l1b);

    if (lista->tamanho <= 1) {
        // Lista original tem menos de dois elementos
        return;
    }

    for (int i = lista->tamanho - 1; i >= 0; i--) {
        l1b->elementos[lista->tamanho - 1 - i] = lista->elementos[i];
    }

    l1b->tamanho = lista->tamanho;
}

