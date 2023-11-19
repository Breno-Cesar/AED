#include <stdio.h>
#include "digito.h"

int main() {
    int n, k;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int resultado = k_esimo_digito(n, k);

    if (resultado != -1) {
        printf("O %d-esimo digito de %d e: %d\n", k, n, resultado);
    } else {
        printf("Valor de k invalido para %d\n", n);
    }

    return 0;
}
