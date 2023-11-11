#include <stdio.h>
#include "lista.h"

int main() {
    int tamanhoLista;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanhoLista);

    LISTA minhaLista = criarLista(tamanhoLista);
    inserirElementos(&minhaLista);

    printf("\nLista original:\n");
    imprimirLista(minhaLista);

    int elementoBusca;
    printf("\nDigite o elemento que deseja buscar: ");
    scanf("%d", &elementoBusca);

    int posicaoSequencial = buscarElementoSequencial(minhaLista, elementoBusca);
    printf("Busca sequencial do elemento %d: %d\n", elementoBusca, posicaoSequencial);

    int posicaoOrdenada = buscarElementoOrdenado(minhaLista, elementoBusca);
    printf("Busca ordenada do elemento %d: %d\n", elementoBusca, posicaoOrdenada);

    int posicaoBinaria = buscarElementoBinario(minhaLista, elementoBusca);
    printf("Busca binária do elemento %d: %d\n", elementoBusca, posicaoBinaria);

    int maiorElemento = buscarMaiorElemento(minhaLista);
    printf("Maior elemento na lista: %d\n", maiorElemento);

    int menorElemento = buscarMenorElemento(minhaLista);
    printf("Menor elemento na lista: %d\n", menorElemento);

    int somaElementos = calcularSoma(minhaLista);
    printf("Soma de todos os elementos na lista: %d\n", somaElementos);

    int produtoElementos = calcularProduto(minhaLista);
    printf("Produto de todos os elementos na lista: %d\n", produtoElementos);

    liberarLista(&minhaLista);

    return 0;
}

