#include <stdio.h>
#include "complexo.h"

int main() {
    double real1, imaginaria1, real2, imaginaria2;

    printf("Digite a parte real do primeiro numero complexo: ");
    scanf("%lf", &real1);
    printf("Digite a parte imaginaria do primeiro numero complexo: ");
    scanf("%lf", &imaginaria1);

    printf("Digite a parte real do segundo numero complexo: ");
    scanf("%lf", &real2);
    printf("Digite a parte imaginaria do segundo numero complexo: ");
    scanf("%lf", &imaginaria2);

    Complexo *z1 = criarComplexo(real1, imaginaria1);
    Complexo *z2 = criarComplexo(real2, imaginaria2);

    if (z1 == NULL || z2 == NULL) {
        printf("Erro ao alocar memoria para os numeros complexos.\n");
        return 1;
    }

    Complexo *soma = somaComplexos(z1, z2);
    Complexo *subtracao = subtrairComplexos(z1, z2);
    Complexo *multiplicacao = multiplicarComplexos(z1, z2);
    Complexo *divisao = dividirComplexos(z1, z2);

    printf("Soma: %.2f + %.2fi\n", soma->real, soma->imaginaria);
    printf("Subtracao: %.2f + %.2fi\n", subtracao->real, subtracao->imaginaria);
    printf("Multiplicacao: %.2f + %.2fi\n", multiplicacao->real, multiplicacao->imaginaria);
    printf("Divisao: %.2f + %.2fi\n", divisao->real, divisao->imaginaria);

    destruirComplexo(z1);
    destruirComplexo(z2);
    destruirComplexo(soma);
    destruirComplexo(subtracao);
    destruirComplexo(multiplicacao);
    destruirComplexo(divisao);

    return 0;
}

