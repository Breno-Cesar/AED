#include "lista.h"
#include <stdio.h>

int main() {
    Lista lista;
    inicializarLista(&lista);

    // Solicitar informações do usuário
    printf("Informe o tamanho da lista (ate %d elementos): ", TAMANHO_MAX);
    scanf("%d", &lista.tamanho);

    if (lista.tamanho > TAMANHO_MAX || lista.tamanho <= 0) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    printf("Informe os elementos da lista:\n");
    for (int i = 0; i < lista.tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista.elementos[i]);
    }

    // Construir e exibir L1a
    Lista l1a;
    percorrerConstruirL1a(&lista, &l1a);

    printf("L1a: ");
    for (int i = 0; i < l1a.tamanho; i++) {
        printf("%d ", l1a.elementos[i]);
    }
    printf("\n");

    // Construir e exibir L1b
    Lista l1b;
    percorrerConstruirL1b(&lista, &l1b);

    printf("L1b: ");
    for (int i = 0; i < l1b.tamanho; i++) {
        printf("%d ", l1b.elementos[i]);
    }
    printf("\n");

    return 0;
}
