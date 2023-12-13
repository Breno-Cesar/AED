#include "lista.h"

int main() {
    Lista l1, l2;
    inicializarLista(&l1);
    inicializarLista(&l2);

    // Solicitar informações do usuário para lista 1
    int tamanho_l1;
    printf("Informe o tamanho da lista 1: ");
    scanf("%d", &tamanho_l1);

    printf("Informe os elementos da lista 1:\n");
    for (int i = 0; i < tamanho_l1; i++) {
        int elemento;
        scanf("%d", &elemento);
        inserirElemento(&l1, elemento);
    }

    // Exibir lista 1
    printf("Lista 1: ");
    exibirLista(&l1);

    // Copiar lista 1 para lista 2
    copiarLista(&l1, &l2);
    printf("Lista 2 (cópia de Lista 1): ");
    exibirLista(&l2);

    // Concatenar lista 1 e lista 2
    printf("Concatenando Lista 1 e Lista 2:\n");
    concatenarListas(&l1, &l2);

    printf("Lista 1 apos concatenacao: ");
    exibirLista(&l1);
    printf("Lista 2 apos concatenacao: ");
    exibirLista(&l2);

    // Solicitar informações do usuário para lista 2
    int tamanho_l2;
    printf("Informe o tamanho da lista 2: ");
    scanf("%d", &tamanho_l2);

    printf("Informe os elementos da lista 2:\n");
    for (int i = 0; i < tamanho_l2; i++) {
        int elemento;
        scanf("%d", &elemento);
        inserirElemento(&l2, elemento);
    }

    // Exibir lista 2
    printf("Lista 2: ");
    exibirLista(&l2);

    // Intercalar lista 1 e lista 2
    printf("Intercalando Lista 1 e Lista 2:\n");
    intercalarListas(&l1, &l2);

    printf("Lista resultante após intercalação: ");
    exibirLista(&l1);

    return 0;
}
