#include <stdio.h>
#include "lista.h"

int main() {
    int tamanhoLista;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanhoLista);

    LISTA minhaLista = criarLista(tamanhoLista);
    inserirElementos(&minhaLista);

    int elementoInserirOrdenado;
    printf("\nDigite o elemento a ser inserido de forma ordenada: ");
    scanf("%d", &elementoInserirOrdenado);
    inserirElementoOrdenado(&minhaLista, elementoInserirOrdenado);

    printf("\nLista original (iterativo):\n");
    imprimirListaIterativo(minhaLista);

    printf("\nLista original (recursivo):\n");
    imprimirListaRecursivo(minhaLista, 0);

    int elementoBusca;
    printf("\nDigite o elemento que deseja buscar na lista (busca binária recursiva): ");
    scanf("%d", &elementoBusca);
    int posicaoBinaria = buscarElementoBinarioRecursivo(minhaLista, elementoBusca, 0, minhaLista.quantidade - 1);
    printf("Busca binária recursiva do elemento %d: %d\n", elementoBusca, posicaoBinaria);

    int maiorElemento = buscarMaiorElementoRecursivo(minhaLista, 0);
    printf("Maior elemento na lista (recursivo): %d\n", maiorElemento);

    int menorElemento = buscarMenorElementoRecursivo(minhaLista, 0);
    printf("Menor elemento na lista (recursivo): %d\n", menorElemento);

    int somaElementos = calcularSomaRecursivo(minhaLista, 0);
    printf("Soma de todos os elementos na lista (recursivo): %d\n", somaElementos);

    int produtoElementos = calcularProdutoRecursivo(minhaLista, 0);
    printf("Produto de todos os elementos na lista (recursivo): %d\n", produtoElementos);

    liberarLista(&minhaLista);

    return 0;
}
