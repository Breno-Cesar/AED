#include "lista_inteiros.h"
#include <stdio.h>

int main() {
    ListaInteiros lista;
    inicializarLista(&lista);

    // Inserir elementos de forma ordenada
    inserirOrdenado(&lista, 5);
    inserirOrdenado(&lista, 3);
    inserirOrdenado(&lista, 8);
    inserirOrdenado(&lista, 3);
    inserirOrdenado(&lista, 10);
    inserirOrdenado(&lista, 5);
    inserirOrdenado(&lista, 8);

    // Imprimir lista
    printf("Lista de Elementos:\n");
    for (int i = 0; i < lista.tamanho; i++) {
        printf("%d ", lista.elementos[i]);
    }
    printf("\n");

    // Contar ocorrências de um valor
    int valorBusca = 5;
    int ocorrencias = contarOcorrencias(&lista, valorBusca);
    printf("O valor %d aparece %d vezes na lista.\n", valorBusca, ocorrencias);

    return 0;
}
