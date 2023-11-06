#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

int main() {
    float lado;
    printf("Digite o lado do cubo: ");
    scanf("%f", &lado);

    Cubo *meuCubo = criarCubo(lado);

    if (meuCubo == NULL) {
        printf("Erro ao alocar memória para o cubo.\n");
        return 1;
    }

    printf("Lado do cubo: %.2f\n", obterLado(meuCubo));
    printf("Area do cubo: %.2f\n", calcularArea(meuCubo));
    printf("Volume do cubo: %.2f\n", calcularVolume(meuCubo));

    free(meuCubo);

    return 0;
}
