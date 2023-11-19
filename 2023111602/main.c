#include <stdio.h>
#include "vetor.h"

int main() {
    Vetor v1, v2, resultado_soma;


    printf("Digite os valores para o vetor v1 (x y z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);


    printf("Digite os valores para o vetor v2 (x y z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);


    soma(&v1, &v2, &resultado_soma);

    printf("Soma dos vetores: (%.2f, %.2f, %.2f)\n", resultado_soma.x, resultado_soma.y, resultado_soma.z);


    float resultado_escalar = produto_escalar(&v1, &v2);
    printf("Produto Escalar: %.2f\n", resultado_escalar);

    return 0;
}
